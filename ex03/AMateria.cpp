/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 17:50:07 by cazerini          #+#    #+#             */
/*   Updated: 2025/08/01 17:42:11 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// constructor
AMateria::AMateria(std::string const& type)
{
	this->type = type;
	return ;
}

AMateria::AMateria(const AMateria& copy)
{
	this->type = copy.type;
	return ;
}

// destructor
AMateria::~AMateria( void )
{
	return ;
}

// functions
AMateria&	AMateria::operator=(const AMateria& obj)
{
	this->type = obj.type;
	return (*this);
}

const std::string&	AMateria::getType( void ) const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Nothing on " << target.getName() << std::endl;
	return ;
}
