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
