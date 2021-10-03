/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:01:20 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/03 11:50:54 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const std::string	ClapTrap::_class_name = "ClapTrap";
const unsigned int	ClapTrap::_class_hp = 10;
const unsigned int	ClapTrap::_class_energy_points = 10;
const unsigned int	ClapTrap::_class_attack_energy_cost = 5;
const unsigned int	ClapTrap::_class_attack_damage = 0;

// Member functions

void ClapTrap::attack(std::string const & target)
{
	std::string		class_name = this->get_class_name();
	std::string		name = this->_name;
	unsigned int	current_energy_points = this->_energy_points;
	unsigned int	dmg = this->_attack_damage;
	unsigned int	attack_energy_cost = this->get_class_attack_energy_cost();

	if (this->_hitpoints == 0)
	{
		std::cout << class_name << " " << name << " cannot attack because he's dead\n";
		return ;
	}
	if (current_energy_points >= attack_energy_cost)
	{
		std::cout << class_name << " " << name << " attacks " << target << " causing "
		<< dmg << " points of damage!\n";
		std::cout << "This attack cost " << class_name << " " << name << " " << attack_energy_cost << " energy points\n";
		this->_energy_points -= attack_energy_cost;
	}
	else
	{
		std::cout << class_name << " " << name << " tries to attack "
		<< target << " but doesn't have enough energy points\n";
	}
	std::cout << class_name << " " << name << " now has "
	<< this->_energy_points << " energy points left\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::string		class_name = this->get_class_name();
	std::string		name = this->_name;

	if (this->_hitpoints == 0)
	{
		std::cout << class_name << " " << name << " didn't take any damage because he's already dead\n";
		return ;
	}
	std::cout << class_name << " "  << name << " just got hit and received " << amount << " points of damage!\n";
	if (amount > this->_hitpoints)
		this->_hitpoints = 0;
	else
		this->_hitpoints -= amount;
	std::cout << class_name << " "  << name << " now has " << this->_hitpoints << " hp\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::string		class_name = this->get_class_name();
	std::string		name = this->_name;
	unsigned int	max_hp = this->get_class_hp();

	if (this->_hitpoints == 0)
	{
		std::cout << class_name << " " << name << " can't be repaired because he's already dead\n";
		return ;
	}
	std::cout << class_name << " "  << name << " was repaired for " << amount << " points of damage!\n";
	if (this->_hitpoints + amount >= max_hp)
	{
		this->_hitpoints = max_hp;
		std::cout << class_name << " "  << name << " is now fully healed!\n";
	}
	else
		this->_hitpoints += amount;
	std::cout << class_name << " "  << name << " now has " << this->_hitpoints << " hp!\n";
}

// Setters
void	ClapTrap::set_name(std::string name)
{
	this->_name = name;
}

void	ClapTrap::set_hitpoints(unsigned int hitpoints)
{
	this->_hitpoints = hitpoints;
}

void	ClapTrap::set_energy_points(unsigned int energy_points)
{
	this->_energy_points = energy_points;
}

void	ClapTrap::set_attack_damage(unsigned int attack_damage)
{
	this->_attack_damage = attack_damage;
}

// Getters
std::string		ClapTrap::get_name( void ) const
{
	return (this->_name);
}

unsigned int	ClapTrap::get_hitpoints( void ) const
{
	return (this->_hitpoints);
}

unsigned int	ClapTrap::get_energy_points( void ) const
{
	return (this->_energy_points);
}

unsigned int	ClapTrap::get_attack_damage( void ) const
{
	return (this->_attack_damage);
}

// Static getters
std::string		ClapTrap::get_class_name( void )
{
	return (ClapTrap::_class_name);
}

unsigned int		ClapTrap::get_class_hp( void )
{
	return (ClapTrap::_class_hp);
}

unsigned int		ClapTrap::get_class_energy_points( void )
{
	return (ClapTrap::_class_energy_points);
}

unsigned int		ClapTrap::get_class_attack_damage( void )
{
	return (ClapTrap::_class_attack_damage);
}

unsigned int		ClapTrap::get_class_attack_energy_cost( void )
{
	return (ClapTrap::_class_attack_energy_cost);
}

// Constructor
ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::string		class_name = this->get_class_name();

	this->_attack_damage = this->get_class_attack_damage();
	this->_energy_points = this->get_class_energy_points();
	this->_hitpoints = this->get_class_hp();
	std::cout << class_name << " "  << this->_name << " has been created\n";
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap & src)
{
	std::string 	name;
	std::string		class_name = this->get_class_name();

	name = src.get_name() + "copy";
	this->set_name(name);
	this->_attack_damage = this->get_class_attack_damage();
	this->_energy_points = this->get_class_energy_points();
	this->_hitpoints = this->get_class_hp();
	std::cout << class_name << " copy "  << this->_name << " has been created\n";
}

// Destrtuctor
ClapTrap::~ClapTrap()
{
	std::string		class_name = this->get_class_name();

	std::cout << class_name << " "  << this->_name << " is now destroyed...\n";
}

// = operator overload
ClapTrap & ClapTrap::operator=(const ClapTrap & rhs)
{
	this->set_name(rhs.get_name());
	this->_attack_damage = rhs.get_attack_damage();
	this->_energy_points = rhs.get_energy_points();
	this->_hitpoints = rhs.get_hitpoints();
	return (*this);
}