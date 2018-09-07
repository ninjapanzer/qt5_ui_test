cmake_minimum_required(VERSION 3.12)
project(gui_test1)

include_directories(${Qt5Widgets_INCLUDE_DIRS} ${QtQml_INCLUDE_DIRS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")
add_definitions(${Qt5Widgets_DEFINITIONS} ${QtQml_DEFINITIONS} ${${Qt5Quick_DEFINITIONS}})
set(CMAKE_CXX_STANDARD 17)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Find the QtWidgets library
set(CMAKE_PREFIX_PATH "/usr/local/opt/qt/lib/cmake/Qt5")
find_package(Qt5 COMPONENTS Core Widgets Qml Quick REQUIRED)
qt5_add_resources(QT_RESOURCES qml.qrc)

add_executable(gui_test1 main.cpp ${QT_RESOURCES})


# Use the Widgets module from Qt 5
target_link_libraries(gui_test1 Qt5::Widgets Qt5::Qml Qt5::Quick)