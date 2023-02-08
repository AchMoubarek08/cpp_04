/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:22:46 by amoubare          #+#    #+#             */
/*   Updated: 2023/02/08 18:13:46 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound() const
{
	std::cout<< "WrongAnimal sound"<< std::endl;
}

std::string	WrongAnimal::getType() const
{
    return (_type);
}

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout<< "WrongAnimal default constructor called"<< std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    std::cout<< "WrongAnimal copy constructor called"<< std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< "WrongAnimal destructor called"<< std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
    std::cout<< "WrongAnimal assignment operator called"<< std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return (*this);
}
// wrong cat canonical member functions


WrongCat::WrongCat() : WrongAnimal()
{
    std::cout<< "WrongCat default constructor called"<< std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal()
{
    std::cout<< "WrongCat copy constructor called"<< std::endl;
    *this = src;
}

WrongCat::~WrongCat()
{
    std::cout<< "WrongCat destructor called"<< std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
    std::cout<< "WrongCat assignment operator called"<< std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return (*this);
}
