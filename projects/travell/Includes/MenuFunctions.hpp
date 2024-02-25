#pragma once

#include "Menu.hpp"

namespace PSkorynin {
	const MenuItem* show_menu(const MenuItem* current);

	const MenuItem* exit(const MenuItem* current);

	const MenuItem* go_DV(const MenuItem* current);
	const MenuItem* go_Altay(const MenuItem* current);
	const MenuItem* go_GoldRing(const MenuItem* current);
	const MenuItem* go_back_from_travel(const MenuItem* current);

	const MenuItem* go_Vladivostok(const MenuItem* current);
	const MenuItem* go_Sahalin(const MenuItem* current);
	const MenuItem* go_Habarovsk(const MenuItem* current);
	const MenuItem* go_back_to_DV(const MenuItem* current);
}