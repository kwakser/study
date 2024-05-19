set(SOURCES
	test_vector.cpp
	test_vector_templates.cpp
)

add_executable(test_vector ${SOURCES})
target_link_libraries(test_vector
	gtest_main
	gmock_main
	vector_lib
)

add_test(test_vector test_vector)