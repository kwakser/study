#include <clocale>
#include <iostream>

#include "Menu.hpp"
#include "MenuFunctions.hpp"
#include "MenuItems.hpp"



int main() {
	std::setlocale(LC_ALL, "");
	const PSkorynin::MenuItem* current = &PSkorynin::MAIN;
	do {
		current = current->func(current);
	} while (true);
}