/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:01:20 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/02 17:49:51 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(std::string const & target)
{
	std::string		name = this->_name;
	unsigned int	dmg = this->_attack_damage;

	
	std::cout << "ClapTrap " << name << " attack " << target << " causing "
	<< dmg << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::string		name = this->_name;

	std::cout << "ClapTrap " << name << " just got hit and received " << amount << " points of damage!\n";
	if (this->_hitpoints < amount)
	{
		this->_hitpoints = 0;
	}
	else
		this->_hitpoints -= amount;
	std::cout << "ClapTrap " << name << " now has " << this->_hitpoints << " hp!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::string		name = this->_name;

	std::cout << "ClapTrap " << name << " was repaired for " << amount << " points of damage!\n";
	if (this->_hitpoints + amount >= 10)
	{
		this->_hitpoints = 10;
		std::cout << "ClapTrap " << name << " is now fully healed!\n";
	}
	else
		this->_hitpoints += amount;
	std::cout << "ClapTrap " << name << " now has " << this->_hitpoints << " hp!\n";
}


ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Claptrap " << this->_name << " has been created\n";
	this->_attack_damage = 0;
	this->_energy_points = 10;
	this->_hitpoints = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << this->_name << " is now destroyed...\n";
}