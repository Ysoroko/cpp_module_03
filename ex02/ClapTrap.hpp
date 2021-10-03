/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:36:23 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/03 20:50:39 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energy_points;
		int				_attack_damage;
		std::string		_class_name;
		unsigned int	_max_hp;

	private:
		static const unsigned int	_class_hp;
		static const unsigned int	_class_energy_points;
		static const unsigned int	_class_attack_damage;
		static const unsigned int	_class_attack_energy_cost;
		

	public:
		// Setters
		void			set_name(std::string name);
		void			set_hitpoints(unsigned int hitpoints);
		void			set_energy_points(unsigned int energy_points);
		void			set_attack_damage(unsigned int attack_damage);

		// Getters
		std::string		get_name( void ) const;
		unsigned int	get_hitpoints( void ) const;
		unsigned int	get_energy_points( void ) const;
		unsigned int	get_attack_damage( void ) const;

		// Static getters
		static std::string		get_class_name( void );
		static unsigned int		get_class_hp( void );
		static unsigned int		get_class_energy_points( void );
		static unsigned int		get_class_attack_damage( void );
		static unsigned int		get_class_attack_energy_cost( void );
		
		// Member functions
		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		// Constructor & Destructor
		ClapTrap(std::string name);
		ClapTrap(std::string name, std::string class_name, unsigned int max_hp);
		ClapTrap(std::string name, std::string class_name, unsigned int hp, unsigned int energy_points, unsigned int attack_damage, unsigned int max_hp);
		ClapTrap(const ClapTrap & src);
		~ClapTrap();

		ClapTrap & operator=(const ClapTrap & rhs);
};


#endif