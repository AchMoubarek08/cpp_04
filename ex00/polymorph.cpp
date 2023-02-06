#include "polymorph.hpp"

// animal canonical form

Animal::Animal() : type("Animal") 
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    if (this != &copy)
        type = copy.type;
    std::cout << "Animal assignment operator called" << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}
// dog canonical form

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this != &copy)
        Animal::operator=(copy);
    std::cout << "Dog assignment operator called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof!" << std::endl;
}
// cat canonical form

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
        Animal::operator=(copy);
    std::cout << "Cat assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow!" << std::endl;
}