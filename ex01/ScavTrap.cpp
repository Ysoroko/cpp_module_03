/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 10:02:52 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/03 10:02:52 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

const std::string ScavTrap::_class_name = "ScavTrap";

// Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::string		class_name = this->_class_name;

	this->_name = name;
	this->_attack_damage = this->get_class_attack_damage();
	this->_energy_points = this->get_class_energy_points();
	this->_hitpoints = this->get_class_hp();
	std::cout << class_name << " "  << this->_name << " has been created\n";
}


ScavTrap::~ScavTrap()
{
	std::string		class_name = this->_class_name;

	std::cout << class_name << " " << this->_name << " is now destroyed...\n";
}

void ScavTrap::attack(std::string const & target)
{
	std::string		class_name = this->_class_name;
	std::string		name = this->_name;
	unsigned int	dmg = this->_attack_damage;
	unsigned int	attack_energy_cost = this->get_class_attack_energy_cost();
	unsigned int	current_energy_points = this->_energy_points;

	if (this->_hitpoints == 0)
	{
		std::cout << name << " has a hard time attacking because he's dead\n";
		return ;
	}
	if (current_energy_points >= attack_energy_cost)
	{
		std::cout << class_name << " " << name << " uses a super ScavTrap attack on " << target << " which results in "
	<< dmg << " damage points!\n";
		std::cout << "This attack used up " << name << "'s " << attack_energy_cost << " energy points\n";
		this->_energy_points -= attack_energy_cost;
	}
	else
	{
		std::cout << name << " doesn't have enough energy points to attack\n";
	}
	std::cout << name << " now has " << this->_energy_points << " energy points left\n";


	
}


void ScavTrap::guardGate( void )
{
	std::string		class_name = this->_class_name;
	std::string		name = this->_name;

	std::cout << class_name << " " << name << " has entered the Gate Keeper mode\n";
	this->set_energy_points(this->get_class_energy_points());
	std::cout << class_name << " " << name << " has fully recovered his energy points!\n";

}