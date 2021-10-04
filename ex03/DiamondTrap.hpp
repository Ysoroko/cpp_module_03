/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:56:17 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/04 11:58:20 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

// Virtual keyword gives us::
//
//   A  		A	A
//  / \  		|	|
// B   C  not 	B	C
//  \ /  		 \ /
//   D 			  D

class DiamondTrap : public virtual ClapTrap, public ScavTrap, public FragTrap
{
	public:
		using FragTrap::_hitpoints;
		using ScavTrap::_energy_points;
		using FragTrap::_attack_damage;
		using ScavTrap::attack;

		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(DiamondTrap const & ref);
		DiamondTrap & operator=(DiamondTrap const & ref);
		void	whoAmI( void );
	private:
		std::string	_name;
};


#endif