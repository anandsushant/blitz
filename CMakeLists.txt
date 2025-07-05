
cmake_minimum_required(VERSION 3.5)
project(trading_sim VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenSSL REQUIRED)
find_package(Boost REQUIRED)

include_directories(${Boost_INCLUDE_DIRS} /usr/include/websocketpp)
include_directories(include)


file(GLOB all_SRC  "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_executable(simulate ${all_SRC})

target_link_libraries(sim
    ${OPENSSL_LIBRARIES}
    pthread
)
