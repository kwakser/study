target_sources(list_lib 
	PRIVATE
		double_linked_list.cpp
	PUBLIC
		double_linked_list.hpp
)

target_include_directories(list_lib PUBLIC
	"${PROJECT_SOURCE_DIR}/src"
)
