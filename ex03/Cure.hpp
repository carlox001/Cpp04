/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:48:18 by cazerini          #+#    #+#             */
/*   Updated: 2025/07/03 15:42:35 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
 # define CURE_HPP
 # include "AMateria.hpp"

class ICharacter;
 
class Cure: public AMateria
{
	public:
		Cure( void );
		Cure(const Cure& copy);
		~Cure( void );

		Cure&		operator=(const Cure& obj);
		AMateria*	clone( void ) const;
		void		use(ICharacter& target);
};
 
#endif