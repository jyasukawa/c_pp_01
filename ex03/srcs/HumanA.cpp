#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;

	return ;
}

// HumanA::HumanA(std::string name, Weapon &weapon)
// {
// 	this->_name = name;
// 	this->_weapon = weapon;
// }