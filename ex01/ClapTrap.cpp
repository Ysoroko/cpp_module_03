/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:01:20 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/03 10:13:04 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const std::string ClapTrap::_obj_name = "ClapTrap";

void ClapTrap::attack(std::string const & target)
{
	std::string		name = this->_name;
	unsigned int	dmg = this->_attack_damage;

	
	std::cout << this->_obj_name << " " << name << " attack " << target << " causing "
	<< dmg << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::string		name = this->_name;

	std::cout << this->_obj_name << " " << name << " just got hit and received " << amount << " points of damage!\n";
	if (this->_hitpoints < amount)
	{
		this->_hitpoints = 0;
	}
	else
		this->_hitpoints -= amount;
	std::cout << this->_obj_name << " " << name << " now has " << this->_hitpoints << " hp!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::string		name = this->_name;

	std::cout << this->_obj_name << " " << name << " was repaired for " << amount << " points of damage!\n";
	if (this->_hitpoints + amount >= 10)
	{
		this->_hitpoints = 10;
		std::cout << this->_obj_name << " " << name << " is now fully healed!\n";
	}
	else
		this->_hitpoints += amount;
	std::cout << this->_obj_name << " " << name << " now has " << this->_hitpoints << " hp!\n";
}


ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << this->_obj_name << " " << this->_name << " has been created\n";
	this->_attack_damage = 20;
	this->_energy_points = 50;
	this->_hitpoints = 100;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_obj_name << " " << this->_name << " is now destroyed...\n";
}