#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    public:
        std::string _ideas[100];
        Brain();
        Brain(Brain const & src);
        ~Brain();
        Brain & operator=(Brain const & rhs);
};

#endif