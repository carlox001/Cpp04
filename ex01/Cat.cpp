/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:34:17 by cazerini          #+#    #+#             */
/*   Updated: 2025/08/10 11:58:15 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// constructors
Cat::Cat( void ): Animal()
{
	std::cout << "Default constructor Cat" << std::endl;
	this->brain = new Brain();
	this->setType("Cat");
	return ;
}

Cat::Cat(const Cat& copy): Animal(copy)
{
	int	i;

	std::cout << "Copy constructor Cat" << std::endl;
	this->brain = new Brain();
	i = 0;
	while (i < 100)
	{
		this->ideas[i] = copy.ideas[i];
		i++;
	}
	this->setType(copy.type);
	return ;
}

// destructor
Cat::~Cat( void )
{
	std::cout << "Default destructor Cat" << std::endl;
	delete brain;
	return ;
}

// functions
Cat&	Cat::operator=(const Cat& obj)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = obj.ideas[i];
		i++;
	}
	this->type = obj.type;
	return (*this); 
}

void	Cat::makeSound( void ) const
{
	std::cout << "MEOWWWWW MEOWWWWWWWWWW MEOWWWWWWWWWWWW" << std::endl;
}
