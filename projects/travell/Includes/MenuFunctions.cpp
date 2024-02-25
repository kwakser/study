#include <iostream>
#include <cstdlib>

#include "MenuFunctions.hpp"

const PSkorynin::MenuItem* PSkorynin::show_menu(const MenuItem* current) {
	std::cout << "Готовы отправиться в путешествие?" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Путешествие > ";

	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;

	return current->children[user_input];
}

const PSkorynin::MenuItem* PSkorynin::exit(const MenuItem* current) {
	std::exit(0);
}

const PSkorynin::MenuItem* PSkorynin::go_DV(const MenuItem* current) {
	std::cout << "Готовы отправиться в путешествие?" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Путешествие > ";

	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;

	return current->children[user_input];
}

const PSkorynin::MenuItem* PSkorynin::go_Altay(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const PSkorynin::MenuItem* PSkorynin::go_GoldRing(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const PSkorynin::MenuItem* PSkorynin::go_back_from_travel(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}

const PSkorynin::MenuItem* PSkorynin::go_Vladivostok(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const PSkorynin::MenuItem* PSkorynin::go_Sahalin(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const PSkorynin::MenuItem* PSkorynin::go_Habarovsk(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const PSkorynin::MenuItem* PSkorynin::go_back_to_DV(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}