#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>
#include "AMateria.hpp"

void chl(){
	system("leaks a.out");
}

int main(){
	atexit(chl);

	{
		//subject's test
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob; delete me; delete src;
	}
	{
		//test2. 4개초과로 스킬을 배울 수 없음.
		// MateriaSource src;
		// src.learnMateria(new Ice());
		// src.learnMateria(new Ice());
		// src.learnMateria(new Ice());
		// src.learnMateria(new Ice());
		//1
		// Cure *cure = new Cure;
		// src.learnMateria(cure);
		//2
		// src.learnMateria(new Cure());
	}
	{
		//배우지않은 스킬을 equip, uneuip, use해보기.
		// IMateriaSource* src= new MateriaSource();
		// ICharacter* jeshin= new Character("jeshin");
		// src->learnMateria(new Ice());
		// AMateria* tmp = src->createMateria("cure");
		// jeshin->equip(tmp);
		// tmp = src->createMateria("ice");
		// jeshin->equip(tmp);
		// // jeshin->unequip(0);
		// // jeshin->unequip(1);
		// ICharacter* seunghan=new Character("seunghan");
		// jeshin->use(0,*seunghan);
		// jeshin->use(1,*seunghan);
		// delete src;delete jeshin;delete seunghan;
	}
	{
		//깊은복사 테스트
		// MateriaSource ms1;
		// MateriaSource ms2;
		// AMateria* tmp;

		// ms1.learnMateria(new Ice());
		// ms1.learnMateria(new Ice());
		// ms2=ms1;
		// std::cout<<"ms1\n";
		// tmp=ms1.createMateria("ice");
		// delete tmp;
		// tmp=ms1.createMateria("ice");
		// delete tmp;
		// tmp=ms1.createMateria("ice");
		// std::cout<<"ms2\n";
		// tmp=ms2.createMateria("ice");
		// delete tmp;
		// tmp=ms2.createMateria("ice");
		// delete tmp;
		// tmp=ms2.createMateria("ice");
	}
	return 0; 
}