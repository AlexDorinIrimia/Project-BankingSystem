include_directories(${CMAKE_SOURCE_DIR}/include)
file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*")
add_executable(bankingsystem ${SOURCES})