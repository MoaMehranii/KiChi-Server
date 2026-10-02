cmake_minimum_required(VERSION 3.20)
project(KiChiServer LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_executable(kichi_server
 src/main.cpp
 src/Commands/CommandRegistry.cpp src/Commands/PutCommand.cpp src/Commands/GetCommand.cpp src/Commands/RemoveCommand.cpp src/Commands/PopCommand.cpp src/Commands/ClearCommand.cpp src/Commands/ContainsCommand.cpp src/Commands/SizeCommand.cpp src/Commands/IsEmptyCommand.cpp
 src/InputHandler/Parser.cpp src/InputHandler/Dispatcher.cpp src/Storage/KeyValueStore.cpp)
target_include_directories(kichi_server PRIVATE include)
if(MSVC)
 target_compile_options(kichi_server PRIVATE /W4 /permissive-)
else()
 target_compile_options(kichi_server PRIVATE -Wall -Wextra -Wpedantic)
endif()
