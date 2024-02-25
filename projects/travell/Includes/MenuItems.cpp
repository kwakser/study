#include "MenuFunctions.hpp"
#include "MenuItems.hpp"

#include <cstddef>

const PSkorynin::MenuItem PSkorynin::DV_VLADIVOSTOK = { 
	"1 - Хочу отправиться во Владивосток", PSkorynin::go_Vladivostok, &PSkorynin::TRAVEL_DV
};
const PSkorynin::MenuItem PSkorynin::DV_SAHALIN = { 
	"2 - Хочу отправиться на Сахалин", PSkorynin::go_Sahalin, &PSkorynin::TRAVEL_DV 
};
const PSkorynin::MenuItem PSkorynin::DV_HABAROVSK = { 
	"3 - Хочу отправиться в Хабаровск", PSkorynin::go_Habarovsk, &PSkorynin::TRAVEL_DV 
};
const PSkorynin::MenuItem PSkorynin::DV_GO_BACK = { 
	"0 - Выйти в предыдущее меню", PSkorynin::go_back_from_travel, &PSkorynin::TRAVEL_DV 
};

namespace {
	const PSkorynin::MenuItem* const DV_children[] = { 
		&PSkorynin::DV_GO_BACK,
		&PSkorynin::DV_VLADIVOSTOK,
		&PSkorynin::DV_SAHALIN,
		&PSkorynin::DV_HABAROVSK
	};
	const int DV_size = sizeof(DV_children) / sizeof(DV_children[0]);
}

const PSkorynin::MenuItem PSkorynin::TRAVEL_DV = { 
	"1 - Хочу отправиться на Дальний Восток", PSkorynin::go_DV, &PSkorynin::TRAVEL, DV_children, DV_size  
};
const PSkorynin::MenuItem PSkorynin::TRAVEL_ALTAY = { 
	"2 - Хочу отправиться на Алтай", PSkorynin::go_Altay, &PSkorynin::TRAVEL 
};
const PSkorynin::MenuItem PSkorynin::TRAVEL_GOLDRING = { 
	"3 - Хочу путешествовать по Золотому Кольцу России", PSkorynin::go_GoldRing, &PSkorynin::TRAVEL 
};
const PSkorynin::MenuItem PSkorynin::TRAVEL_GO_BACK = { 
	"0 - Выйти в главное меню", PSkorynin::go_back_from_travel, &PSkorynin::TRAVEL 
};

namespace {
	const PSkorynin::MenuItem* const travel_children[] = { 
		&PSkorynin::TRAVEL_GO_BACK,
		&PSkorynin::TRAVEL_DV,
		&PSkorynin::TRAVEL_ALTAY,
		&PSkorynin::TRAVEL_GOLDRING
	};
	const int travel_size = sizeof(travel_children) / sizeof(travel_children[0]);
}

const PSkorynin::MenuItem PSkorynin::TRAVEL = {
	"1 - Хочу путешествовать по России", PSkorynin::show_menu, &PSkorynin::MAIN, travel_children, travel_size 
};
const PSkorynin::MenuItem PSkorynin::EXIT = { 
	"0 - Закончить путешествия", PSkorynin::exit, &PSkorynin::MAIN
};

namespace {
	const PSkorynin::MenuItem* const main_children[] = {
		&PSkorynin::EXIT,
		&PSkorynin::TRAVEL
	};
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const PSkorynin::MenuItem PSkorynin::MAIN = {
	nullptr, PSkorynin::show_menu, nullptr, main_children, main_size
};