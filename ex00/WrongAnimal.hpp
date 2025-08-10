/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:18:14 by cazerini          #+#    #+#             */
/*   Updated: 2025/08/10 11:45:12 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
 #define WRONGANIMAL_HPP
 #include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
		
	public:
		WrongAnimal( void );
		WrongAnimal(const WrongAnimal& copy);
		virtual ~WrongAnimal( void );

		WrongAnimal&	operator=(const WrongAnimal& obj);
		std::string 	getType( void ) const;
		void			setType(std::string type);
		void			makeSound( void ) const;
};

#endif