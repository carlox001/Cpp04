/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:04:22 by cazerini          #+#    #+#             */
/*   Updated: 2025/08/10 12:09:15 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		delete j;
		delete i;
	}

	std::cout << std::endl << std::endl;

	{
		const Animal	*arr[10];
	
		for (int i = 0; i < 5; i++)
		{
			arr[i] = new Dog();
			arr[i]->makeSound();
		}
		
		std::cout << std::endl;
		
		for (int i = 5; i < 10; i++)
		{
			arr[i] = new Cat();
			arr[i]->makeSound();
		}
		
		std::cout << std::endl;
			
		for (int i = 0; i < 10; i++)
			delete arr[i];
	}
	
	std::cout << std::endl << std::endl;

	{
		const Dog*	k = new Dog();
		const Animal* l = new Dog(*k);
		
		delete k;
		delete l;
	}
	
	return (0);
}