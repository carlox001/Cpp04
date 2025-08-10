/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:44:33 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/22 18:39:17 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
 # define ICE_HPP
 # include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice( void );
		Ice(const Ice& copy);
		~Ice( void );

		Ice&		operator=(const Ice& obj);
		AMateria*	clone( void ) const;
		void		use(ICharacter& target);
};
 
#endif