#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void	Harl::complain(std::string level){
	std::string cmp[4] = {"DEBUG","INFO","WARNING","ERROR"};
	void (Harl::*ftab[4])()={&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int pos;
	for(pos=0;pos<4;pos++){
		if (cmp[pos]==level)
			break;
	}
	switch (pos){
		case 0:{
			(this->*ftab[0])();
			break;
		}
		case 1:{
			(this->*ftab[1])();
			break;
		}
		case 2:{
			(this->*ftab[2])();
			break;
		}
		case 3:{
			(this->*ftab[3])();
			break;
		}
	}
}

void	Harl::_debug(void){
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"<<"\n";
}

void	Harl::_info(void){
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<"\n";
}

void	Harl::_warning(void){
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<"\n";
}

void	Harl::_error(void){
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<"\n";
}