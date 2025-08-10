/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 18:30:43 by cazerini          #+#    #+#             */
/*   Updated: 2025/08/01 17:41:58 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// constructor
Ice::Ice( void ): AMateria("ice")
{
	return ;
}

Ice::Ice(const Ice& copy): AMateria(copy)
{
	this->type = copy.type;
	return ;
}

// destructor
Ice::~Ice( void )
{
	return ;
}

// functions
Ice&	Ice::operator=(const Ice& obj)
{
	this->type = obj.type;
	return (*this);
}

AMateria*	Ice::clone( void ) const
{
	AMateria	*obj = new Ice();
	return (obj);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
	<< " *" << std::endl;
	return ;
}