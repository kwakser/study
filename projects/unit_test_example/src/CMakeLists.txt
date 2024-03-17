target_sources(insert_sort_lib 
	PRIVATE
		insert_sort.cpp
	PUBLIC
		insert_sort.hpp
)

target_include_directories(insert_sort_lib PUBLIC
	"${PROJECT_SOURCE_DIR}/src"
)
