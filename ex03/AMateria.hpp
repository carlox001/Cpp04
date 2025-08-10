/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 15:30:58 by cazerini          #+#    #+#             */
/*   Updated: 2025/08/01 16:26:29 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
 #define AMATERIA_HPP
 #include <iostream>
 #include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(std::string const& type);
		AMateria(const AMateria& copy);
		virtual ~AMateria( void );

		AMateria&			operator=(const AMateria& obj);
		std::string const&	getType( void ) const;
		virtual AMateria*	clone( void ) const = 0;
		virtual void		use(ICharacter& target);
};

#endif
 