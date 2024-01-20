#include "HumanB.hpp"

HumanB::HumanB(void)
{
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;

	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their ";
	if (this->_weapon != NULL)
		std::cout << this->_weapon->getType();
	else
		std::cout << "hands";
	std::cout << std::endl;

	return ;
}

// HumanB::HumanB(std::string name)
// {
// 	this->_name = name;
// 	this->_weapon = NULL;
// }