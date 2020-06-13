cmake_minimum_required(VERSION 3.8)

set(t1 test_plus)
set(t2 test_minus)

set(Sources_test1
    test_plus.cpp
)

set(Sources_test2
    test_minus.cpp
)

add_executable(${t1} ${Sources_test1})
add_executable(${t2}   ${Sources_test2})
target_link_libraries(${t1} PUBLIC
    gtest_main
    Laborator-Pilot
)
target_link_libraries(${t2} PUBLIC
    gtest_main
    Laborator-Pilot
)

add_test(
    NAME ${t1}
    COMMAND ${t1}
)

add_test(
    NAME ${t2}
    COMMAND ${t2}
)