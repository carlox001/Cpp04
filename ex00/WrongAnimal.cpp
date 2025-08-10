/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:06:47 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/20 16:19:49 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// constructors
WrongAnimal::WrongAnimal( void )
{
	std::cout << "Default constructor WrongAnimal" << std::endl;
	this->type = "WrongAnimal";
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "Copy constructor WrongAnimal" << std::endl;
	this->type = copy.type;
	return ;
}

// destructor
WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Default destructor WrongAnimal" << std::endl;
	return ;
}

// functions
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	this->type = obj.type;
	return (*this); 
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "*WrongAnimal sound*" << std::endl;
}
