/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:34:17 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/19 16:53:08 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// constructors
Cat::Cat( void ): Animal()
{
	std::cout << "Default constructor Cat" << std::endl;
	this->setType("Cat");
	return ;
}

Cat::Cat(const Cat& copy): Animal(copy)
{
	std::cout << "Copy constructor Cat" << std::endl;
	this->setType(copy.type);
	return ;
}

// destructor
Cat::~Cat( void )
{
	std::cout << "Default destructor Cat" << std::endl;
	return ;
}

// functions
Cat&	Cat::operator=(const Cat& obj)
{
	this->type = obj.type;
	return (*this); 
}

void	Cat::makeSound( void ) const
{
	std::cout << "MEOWWWWW MEOWWWWWWWWWW MEOWWWWWWWWWWWW" << std::endl;
}
