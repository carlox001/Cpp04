/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:06:58 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/19 16:53:25 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
 #define ANIMAL_HPP
 #include <iostream>

class Animal
{
	protected:
		std::string	type;
		
	public:
		Animal( void );
		Animal(const Animal& copy);
		virtual ~Animal( void );

		Animal&				operator=(const Animal& obj);
		std::string 		getType( void ) const;
		void				setType(std::string type);
		virtual void		makeSound( void ) const;
};

#endif