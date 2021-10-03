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

const std::string ScavTrap::_obj_name = "ScavTrap";

// Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::string		class_name = this->get_class_name();

	this->_name = name;
	this->_attack_damage = this->get_class_attack_damage();
	this->_energy_points = this->get_class_energy_points();
	this->_hitpoints = this->get_class_hp();
	std::cout << class_name << " "  << this->_name << " has been created\n";
}


ScavTrap::~ScavTrap()
{
	std::cout << this->_obj_name << " " << this->_name << " is now destroyed...\n";
}

void ScavTrap::attack(std::string const & target)
{
	std::string		name = this->_name;
	unsigned int	dmg = this->_attack_damage;

	
	std::cout << this->_obj_name << " " << name << " attacks " << target << " causing "
	<< dmg << " points of damage!\n";
}


void ScavTrap::guardGate( void )
{
	std::string		name = this->_name;

	std::cout << this->_obj_name << " " << name << " has entered the Gate Keeper mode\n";
}