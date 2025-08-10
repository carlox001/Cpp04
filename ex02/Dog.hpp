/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:08:35 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/20 16:15:13 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
 #define DOG_HPP
 #include "Animal.hpp"
 #include "Brain.hpp"

class Dog: public Animal, private Brain
{
	private:
		Brain	*brain;

	public:
		Dog( void );
		Dog(const Dog& copy);
		~Dog( void );

		Dog&		operator=(const Dog& obj);
		void		makeSound( void ) const;
};

#endif
