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

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	std::cout << this->_obj_name << " " << this->_name << " has been created\n";
	this->_attack_damage = 20;
	this->_energy_points = 50;
	this->_hitpoints = 100;
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


void guardGate( void )
{
	std::string		name = this->_name;

	std::cout << this->_obj_name << " " << name << " has entered the Gate Keeper mode\n";
}