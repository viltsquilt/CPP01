#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon): _name(name), _weapon(Weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their weapon " << _weapon.getType() << std::endl;
}
