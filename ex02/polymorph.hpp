#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include <iostream>
# include <string>
# include "brain.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const = 0;
};

class Dog : public Animal
{
    private:
        Brain* _brain;
    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        ~Dog();
        void makeSound() const;
};

class Cat : public Animal
{
    private:
        Brain* _brain;
    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        ~Cat();
        void makeSound() const;
};
#endif