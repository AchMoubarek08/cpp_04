#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const & src);
        ~WrongAnimal();

        WrongAnimal & operator=(WrongAnimal const & rhs);
        virtual void makeSound() const;
        std::string getType() const;
    protected:
        std::string _type;
};

// Wrong Cat class

class   WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const & src);
        ~WrongCat();
        WrongCat & operator=(WrongCat const & rhs);
        std::string getType()const;
};

#endif