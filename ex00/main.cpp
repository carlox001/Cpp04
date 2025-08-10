/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:04:22 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/20 16:27:06 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	std::cout << "=========test=========" << std::endl << std::endl;
	
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		
		delete	meta;
		delete	i;
		delete	j;
	}

	std::cout << std::endl << "=========Wrong test=========" << std::endl << std::endl;
		
	{
		const WrongAnimal* meta = new WrongAnimal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();
		
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		
		delete	meta;
		delete	i;
		delete	j;
	}
	
	return (0);
}