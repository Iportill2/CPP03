/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:06:28 by imontero          #+#    #+#             */
/*   Updated: 2023/12/19 17:41:03 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int 		_hitPoints;
		int 		_energyPoints;
		int 		_attackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
		
		ClapTrap(const ClapTrap &copy);
		
		ClapTrap & operator =(ClapTrap const &inst2);
		
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		bool		isWorking(void);
		
		std::string getName(void);
		void		setName(std::string name);
		
		int			getHp(void);
		void		setHp(unsigned int amount);
		
		int			getEp(void);
		void		setEp(unsigned int amount);
		void		substractEp(unsigned int amount);
		
		void		setAt(unsigned int amount);
		void		showStatus(void);
};

#endif
