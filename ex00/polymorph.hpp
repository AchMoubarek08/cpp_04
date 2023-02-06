#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include <iostream>
# include <string>

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
        virtual void makeSound() const;
};

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        ~Dog();
        void makeSound() const;
};

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        ~Cat();
        void makeSound() const;
};
#endif