/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:56:06 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/04 12:03:12 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	std::cout << "Shiny DiamondTrap " << name << " entered the room!\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Shiny DiamondTrap " << this->_name << " shines no more...!\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const & ref) : ClapTrap(ref.get_name()), FragTrap(ref.get_name()), ScavTrap(ref.get_name())
{
	this->_name = ref.get_name();
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & ref)
{
	this->_name = ref.get_name();
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap's name is " << this->_name << std::endl;
}