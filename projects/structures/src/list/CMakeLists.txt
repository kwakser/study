target_sources(scl_lib
	PRIVATE
		doubly_linked_list.cpp
)

target_include_directories(scl_lib PUBLIC
	"${CURRENT_SOURCE_DIR}"
)