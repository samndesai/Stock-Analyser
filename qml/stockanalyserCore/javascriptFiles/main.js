'use strict';
var wsUri = "ws://localhost:12345";
var indicatorType = {}, currentLevel = {}, stockName, mainData, elliottCount;
var indexStart = {}, indexEnd = {};
var activeTab, mainCaller;
var firstTime = 1;

var stockList = [];
var tabList = {
        list: []
    };

window.onresize = function(){ 
    location.reload(); 
    // $("#mainTabs").html('');
    // $("#mainTabsContent").html('');
    // add_tabs(tabList);
}

window.onload = function() {
    if(firstTime==1){
        firstTime = 0;
        var socket = new WebSocket(wsUri);

        socket.onclose = function()
        {
            console.error("web channel closed");
        };
        socket.onerror = function(error)
        {
            console.error("web channel error: " + error);
        };
        socket.onopen = function()
        {
            new QWebChannel(socket, function(channel) {
                window.chart = channel.objects.chartdata;

                // chart.getWH(function (returnValue){
                //     value_recieved(chart,returnValue);
                // });

                chart.getStockList(function (returnValue){
                    for(var i=0;i<returnValue.list.length;i++)
                        stockList.push(returnValue.list[i].name.slice(0, -1));
                    tabList.list.push({
                        name: stockList[0],
                        maxlevels: 5
                    });
                    mainCaller = chart;
                    add_tabs(tabList);
                });
            });
        }
        // add_tabs(tabList);
    }
}

function add_tabs(tabList){
    var numTabs = 0;

    for(numTabs=0;numTabs<tabList.list.length;numTabs++){
        if(numTabs==0){
            $("#mainTabs").append($("<li class=\"active\">\
                                <a href=\"#tab" + (numTabs+1) + "\" data-toggle=\"tab\">" + tabList.list[numTabs].name + "</a>\
                                </li>"));
            $("#mainTabsContent").append($("<div class=\"tab-pane active\" id=\"tab" + (numTabs+1) + "\">\
                                    <button class=\"btn\" id=\"buttontab" + (numTabs+1) + "\">Reset</button>\
                                </div>"));
            stockName = tabList.list[numTabs].name;
        }
        else{
            $("#mainTabs").append($("<li>\
                                <a href=\"#tab" + (numTabs+1) + "\" data-toggle=\"tab\">" + tabList.list[numTabs].name + "</a>\
                                </li>"));
            $("#mainTabsContent").append($("<div class=\"tab-pane\" id=\"tab" + (numTabs+1) + "\">\
                        <button class=\"btn\" id=\"buttontab" + (numTabs+1) + "\">Reset</button>\
                        </div>"));
        }
        indicatorType["tab"+numTabs] = "normal";
        currentLevel["tab"+numTabs] = -1;

        indexStart[tabList.list[numTabs].name] = 1;
        indexEnd[tabList.list[numTabs].name] = 100;

        addContent(numTabs+1,tabList.list[numTabs]);
    }

    $("#mainTabs").append($("<li>\
        <a href=\"#\" class=\"add-contact\">+ Add Stock</a>\
        </li>"));

    $(".nav-tabs").on("click", "a", function (e) {
        e.preventDefault();
        if (!$(this).hasClass('add-contact')) {
            $(this).tab('show');
        }
    })
    .on("click", "span", function () {
        var anchor = $(this).siblings('a');
        $(anchor.attr('href')).remove();
        $(this).parent().remove();
        $(".nav-tabs li").children('a').first().click();
    });

    $('.add-contact').click(function (e) {
        e.preventDefault();
        var id = $(".nav-tabs").children().length;

        $(this).closest('li').before("<li>\
                                <a href=\"#tab" + (id) + "\" data-toggle=\"tab\">New Stock</a>\
                                </li>");
        $("#mainTabsContent").append($("<div class=\"tab-pane\" id=\"tab" + (id) + "\">\
                        </div>"));

        $('.nav-tabs li:nth-child(' + id + ') a').click();

        addNewTab(id);
    });

    registerClickEvent()
    
    activeTab = tabList.list[0].name;
    indexStart[activeTab] = 1;
    indexEnd[activeTab] = 100;
    mainCaller.getstockPriceData(activeTab, indexStart[activeTab], indexEnd[activeTab], function(returnValue) {
        mainData = [];
        var parseDate = d3.time.format("%Y-%m-%d").parse;

        for(var i=1;i<returnValue.list.length;i++){
            mainData.push({
                date: parseDate(returnValue.list[i].date),
                open: +returnValue.list[i].open,
                high: +returnValue.list[i].high,
                low: +returnValue.list[i].low,
                close: +returnValue.list[i].close,
                volume: +returnValue.list[i].volume,
            });
        }

        value_recieved("tab1",mainData);
    });
    // d3.csv("data.csv", function(error, data) {
    //     var parseDate = d3.time.format("%d-%b-%y").parse;

    //     data = data.slice(0, 200).map(function(d) {
    //         return {
    //             date: parseDate(d.Date),
    //             open: +d.Open,
    //             high: +d.High,
    //             low: +d.Low,
    //             close: +d.Close,
    //             volume: +d.Volume
    //         };
    //     });
    //     mainData = data;
    //     value_recieved("tab1",mainData);
    // });
}

function addNewTab(index){
    var str = "<div id=addTab" + index + " style=\"position: absolute; left: 50%; top: 25%;\" class=\"btn-group\">\
            <a class=\"btn dropdown-toggle\" data-toggle=\"dropdown\" href=\"#\">\
                <span id=\"addStock"+index+"\">Select Stock</span>\
                <span class=\"caret\"></span>\
            </a>\
            <ul class=\"dropdown-menu\" role=\"menu\" aria-labelledby=\"dropdownMenu\">";
    for(var i=0;i<stockList.length;i++){
        str = str + "<li><a id=\"" + stockList[i] + "_" + index + "_" + i + "\" tabindex=\"-1\" href=\"#\">" + stockList[i] + "</a></li>";
    }
    str = str + "</ul></div>";
    $("#tab" + index).append($(str));
    for(var i=0;i<stockList.length;i++){
        $("#"+stockList[i] + "_" + index + "_" + i).click(function(e) {
            indicatorType["tab"+index] = "normal";
            currentLevel["tab"+index] = -1;
            $("#addTab" + index).remove();
            $('#mainTabs li:eq(' + (e.target.id.slice(-3,-2)-1) + ') a').html(stockList[e.target.id.slice(-1)])

            $("#tab"+index).append($("<button class=\"btn\" id=\"buttontab" + index + "\">Reset</button>"));
            addContent(index,{"name":stockList[e.target.id.slice(-1)],"maxlevels":5});
            // value_recieved("tab"+index,mainData);

            activeTab = stockList[e.target.id.slice(-1)];
            indexStart[activeTab] = 1;
            indexEnd[activeTab] = 100;
            mainCaller.getstockPriceData(activeTab, indexStart[activeTab], indexEnd[activeTab], function(returnValue) {
                mainData = [];
                var parseDate = d3.time.format("%Y-%m-%d").parse;

                for(var i=1;i<returnValue.list.length;i++){
                    mainData.push({
                        date: parseDate(returnValue.list[i].date),
                        open: +returnValue.list[i].open,
                        high: +returnValue.list[i].high,
                        low: +returnValue.list[i].low,
                        close: +returnValue.list[i].close,
                        volume: +returnValue.list[i].volume,
                    });
                }

                value_recieved("tab"+index,mainData);
            });

            registerClickEvent()
        });
    }
}

function registerClickEvent(){
    $('a[data-toggle="tab"]').on('shown.bs.tab', function(e){
        var currentTab = "tab" + e.target.href.slice(-1); // get current tab
        stockName = e.target.text;
        
        activeTab = stockName;
        mainCaller.getstockPriceData(activeTab, indexStart[activeTab], indexEnd[activeTab], function(returnValue) {
            mainData = [];
            var parseDate = d3.time.format("%Y-%m-%d").parse;

            for(var i=1;i<returnValue.list.length;i++){
                mainData.push({
                    date: parseDate(returnValue.list[i].date),
                    open: +returnValue.list[i].open,
                    high: +returnValue.list[i].high,
                    low: +returnValue.list[i].low,
                    close: +returnValue.list[i].close,
                    volume: +returnValue.list[i].volume,
                });
            }

            value_recieved(currentTab,mainData);
        });

        // value_recieved(currentTab,mainData);
        activeTab = stockName;
    });
}

function addContent(index,dataObject){
    $("#tab" + index).append($("\
        <div style=\"position: absolute; left: 15%; top: 12%;\" class=\"btn-group\">\
            <a class=\"btn dropdown-toggle\" data-toggle=\"dropdown\" href=\"#\">\
                <span id=\"mainName"+index+"\">Indicators</span>\
                <span class=\"caret\"></span>\
            </a>\
            <ul class=\"dropdown-menu\" role=\"menu\" aria-labelledby=\"dropdownMenu\">\
                <li><a id=\"normal" + index + "\" tabindex=\"-1\" href=\"#\">Normal</a></li>\
                <li><a id=\"elliott" + index + "\" tabindex=\"-1\" href=\"#\">Elliott Wave Count</a></li>\
            </ul>\
        </div>\
    "));

    $("#normal"+index).click(function() {
        indicatorType["tab"+index] = "normal";
        currentLevel["tab"+index] = -1;
        $("#levels").remove();
        $("#mainName"+index).html("Normal");
    });

    $("#elliott"+index).click(function() {
        indicatorType["tab"+index] = "elliott";
        currentLevel["tab"+index] = 1;
        $("#mainName"+index).html("Elliott Wave Count");
        
        $("#tab" + index).append($("\
            <div id=\"levels\" style=\"position: absolute; left: 50%; top: 12%\" class=\"btn-group\">\
                <a class=\"btn dropdown-toggle\" data-toggle=\"dropdown\" href=\"#\">\
                    <span id=\"mainLevel"+index+"\">Levels</span>\
                    <span class=\"caret\"></span>\
                </a>\
                <ul id=\"levelDrop" + index + "\" class=\"dropdown-menu\" role=\"menu\" aria-labelledby=\"dropdownMenu\">\
                </ul>\
            </div>\
        "));

        $("#mainLevel"+index).html("Level 1");

        mainCaller.getEllietteCount(activeTab, indexStart[activeTab], indexEnd[activeTab], currentLevel["tab"+index], function(returnValue){
            elliottCount = returnValue;
            value_recieved("tab" + index,mainData)
        });

        for(var i=0;i<dataObject.maxlevels;i++){
            $("#levelDrop" + index).append($("\
                <li><a id=\"level_"+i+"_"+index+"\" tabindex=\"-1\" href=\"#\">Level " + (i+1) + "</a></li>\
            "));

            $("#level_"+i+"_"+index).click(function(e) {
                currentLevel["tab"+index] = e.target.text.slice(-1);
                $("#mainLevel"+index).html("Level " + e.target.text.slice(-1));

                mainCaller.getEllietteCount(activeTab, indexStart[activeTab], indexEnd[activeTab], currentLevel["tab"+index], function(returnValue){
                    elliottCount = returnValue;
                    value_recieved("tab" + index,mainData)
                });
            });
        }
        // <li><a tabindex=\"-1\" href=\"#\">Level 1</a></li>\
    });
}

function value_recieved(displayTab,data){
    var margin = {top: 50, right: 70, bottom: 50, left: 50},
        width = window.innerWidth - margin.left - margin.right,
        height = window.innerHeight - margin.top - margin.bottom;

    var dateFormat = d3.time.format("%Y-%m-%d"),
        parseDate = dateFormat.parse,
        valueFormat = d3.format(',.2fs');

    var x = techan.scale.financetime()
        .range([0, width]);

    var y = d3.scale.linear()
        .range([height, 0]);

    var candlestick = techan.plot.candlestick()
        .xScale(x)
        .yScale(y);

    if(indicatorType[displayTab] == "elliott"){
        var tradearrow = techan.plot.tradearrow()
                .xScale(x)
                .yScale(y)
                .orient("up")
                .on("mouseenter", enter)
                .on("mouseout", out);
    }

    var xAxis = d3.svg.axis()
        .scale(x)
        .orient("bottom");

    var yAxis = d3.svg.axis()
        .scale(y)
        .orient("left");

    var accessor = candlestick.accessor();

    var tip = d3.select('#' + displayTab).append('div').attr('class', 'tooltip');

    data.sort(function(a, b) { return d3.ascending(accessor.d(a), accessor.d(b)); });

    var zoom = d3.behavior.zoom()
    .on("zoom", draw);

    d3.select("svg").remove();

    var svg = d3.select("#" + displayTab).append("svg")
            .attr("width", width + margin.left + margin.right)
            .attr("height", height + margin.top + margin.bottom)
        .append("g")
            .attr("transform", "translate(" + margin.left + "," + margin.top + ")");

    // var trades = [
    //         { date: data[10].date, type: "buy", price: data[10].low, quantity: 1000 },
    //         { date: data[20].date, type: "sell", price: data[20].high, quantity: 200 },
    //         { date: data[70].date, type: "buy", price: data[70].open, quantity: 500 },
    //     ];

    if(indicatorType[displayTab] == "elliott"){
        var trades = [];
        for(var i=0;i<elliottCount.list.length-1;i++){
            if(parseInt(elliottCount.list[i].value)>0)
                trades.push({ date: data[i+1].date, value:  elliottCount.list[i].value, type: "buy", price: data[i+1].low, quantity: 1000 });
        }
    }

    var valueText = svg.append('text')
            .style("text-anchor", "end")
            .attr("class", "coords")
            .attr("x", width - 5)
            .attr("y", 25)
            .style("font-size","20px");


    svg.append("clipPath")
            .attr("id", "clip")
        .append("rect")
            .attr("x", 0)
            .attr("y", y(1))
            .attr("width", width)
            .attr("height", y(0) - y(1));

    svg.append("g")
            .attr("class", "candlestick")
            .attr("clip-path", "url(#clip)");

    svg.append("g")
            .attr("class", "x axis")
            .attr("transform", "translate(0," + height + ")");

    svg.append("g")
            .attr("class", "y axis")
        .append("text")
            .attr("transform", "rotate(-90)")
            .attr("y", 6)
            .attr("dy", ".71em")
            .style("text-anchor", "end")
            .text("Price ($)");

    svg.append("rect")
            .attr("class", "pane")
            .attr("width", width)
            .attr("height", height)
            .call(zoom);

    if(indicatorType[displayTab] == "elliott"){
        svg.append("g")
            .attr("class", "tradearrow")
            .attr("clip-path", "url(#clip)");
    }

        // var accessor = candlestick.accessor();

    x.domain(data.map(accessor.d));
    y.domain(techan.scale.plot.ohlc(data, accessor).domain());

    svg.select("g.candlestick").datum(data);
    if(indicatorType[displayTab] == "elliott")
        svg.select("g.tradearrow").datum(trades);
    draw();

    d3.select("#button" + displayTab).on("click", reset);
    // Associate the zoom with the scale after a domain has been applied
    zoom.x(x.zoomable().clamp(false)).y(y);

    function draw() {
        svg.select("g.candlestick").call(candlestick);
        if(indicatorType[displayTab] == "elliott")
            svg.select("g.tradearrow").call(tradearrow);

        svg.select("g.x.axis").call(xAxis);
        svg.select("g.y.axis").call(yAxis);
    }

    function reset() {
        // var currentTab = "tab" + e.target.href.slice(-1); // get current tab
        value_recieved(displayTab,data)
        // zoom.scale(1);
        // zoom.translate([0,0]);
        // draw();
    }

    function enter(d) {
        valueText.style("display", "inline");
        refreshText(d);
    }

    function out() {
        valueText.style("display", "none");
    }

    function refreshText(d) {
        valueText.text("For " + dateFormat(d.date) + ", Count: " + d.value);
    }
}
