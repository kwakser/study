set(SOURCES
	test_insert.cpp
)

add_executable(test_insert ${SOURCES})
target_link_libraries(test_insert
	gtest_main
	gmock_main
	insert_sort_lib
)

add_test(test_insert test_insert)