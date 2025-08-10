/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:12:29 by cazerini          #+#    #+#             */
/*   Updated: 2025/08/01 17:42:03 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// constructor
Cure::Cure( void ): AMateria("cure")
{
	return ;
}

Cure::Cure(const Cure& copy): AMateria(copy)
{
	this->type = copy.type;
	return ;
}

// destructor
Cure::~Cure( void )
{
	return ;
}

// functions
Cure&	Cure::operator=(const Cure& obj)
{
	this->type = obj.type;
	return (*this);
}

AMateria*	Cure::clone( void ) const
{
	AMateria	*obj = new Cure();
	return (obj);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName()
	<< "'s wounds *" << std::endl;
	return ;
}