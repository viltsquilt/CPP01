#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	_weapon = &Weapon;
}

void	HumanB::attack()
{
	if (_weapon == nullptr)
		std::cout << _name << " is screwed" << std::endl;
	else
		std::cout << _name << " attacks with their weapon " << _weapon->getType() << std::endl;
}
