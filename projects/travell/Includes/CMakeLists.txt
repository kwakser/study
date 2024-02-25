target_sources(travell 
	PRIVATE
		Menu.hpp
		MenuFunctions.cpp
		MenuFunctions.hpp
		MenuItems.cpp
		MenuItems.hpp
)

target_include_directories(travell PRIVATE
	"${PROJECT_SOURCE_DIR}/Includes"
)
