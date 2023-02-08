#include "brain.hpp"

// brain class canonical member functions

Brain::Brain()
{
    std::cout<< "Brain default constructor called"<< std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = "empty";
}

Brain::Brain(Brain const & src)
{
    std::cout<< "Brain copy constructor called"<< std::endl;
    *this = src;
}

Brain::~Brain()
{
    std::cout<< "Brain destructor called"<< std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
    std::cout<< "Brain assignment operator called"<< std::endl;
    if (this != &rhs)
        for (int i = 0; i < 100; i++)
            _ideas[i] = rhs._ideas[i];
    return (*this);
}

