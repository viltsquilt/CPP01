#include "Zombie.hpp"

Zombie::Zombie()
{}

void	Zombie::setName(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << " is being destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << _name << ": BraaaaaiiiinzzzzzZ..." << std::endl;
}
