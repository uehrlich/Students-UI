cmake_minimum_required(VERSION 3.5)

project(MyQtProject)



find_package(Qt6 REQUIRED COMPONENTS Core Gui Qml Quick )
qt_standard_project_setup()

# Add your source files
set(SOURCES
    src/main.cpp
    # Add other source files here
)

# Create the executable
add_executable(app ${SOURCES})

# Link against the required Qt modules
target_link_libraries(app PUBLIC Qt6::Core Qt6::Gui  Qt6::Qml)
