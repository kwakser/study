set(SOURCES
	test_list.cpp
	test_list_templates.cpp
)

add_executable(test_list ${SOURCES})
target_link_libraries(test_list
	gtest_main
	gmock_main
	list_lib
)

add_test(test_list test_list)