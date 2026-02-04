#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
			std::string	_name;
			Weapon	&_weapon;
	public:
			HumanA();
			HumanA(std::string name, Weapon &Weapon);
			~HumanA();
			void	attack();
};
