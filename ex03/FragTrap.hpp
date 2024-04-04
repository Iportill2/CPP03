/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:49:15 by imontero          #+#    #+#             */
/*   Updated: 2023/12/20 08:32:48 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	protected:
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		
		FragTrap(const FragTrap &copy);

		FragTrap & operator =(FragTrap const &inst2);		
		
		void	highFivesGuys(void);
};

#endif
