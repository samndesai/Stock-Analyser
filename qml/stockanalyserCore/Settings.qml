pragma Singleton
import QtQml 2.1

QtObject {
    property int screenHeight: 480
    property int screenWidth: 720

    property string windowTitle: "Stock Analyser"
    property string qml_files: "stockanalyserCore"
    property string algorithm_files: "stockanalyserCore"
    property string database_files: "stockanalyserCore"
    property string username: ""
}
