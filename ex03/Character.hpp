/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 15:55:11 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/25 11:21:47 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
 # define CHARACTER_HPP
 # include "ICharacter.hpp"
 # include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		AMateria	*inventory[4];
		std::string	name;

	public:
		Character(std::string name);
		Character(const Character& copy);
		~Character( void );

		Character&			operator=(const Character& copy);
		std::string const&	getName( void ) const;
		void				equip(AMateria *m);
		void 				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
