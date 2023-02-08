#include "polymorph.hpp"
#include "WrongAnimal.hpp"
#include "brain.hpp"

int main()
{
    
    Animal* j = new Dog();
    Animal* i = new Cat();
    // Animal *a = new Dog();
    Animal *animal[4];

    for (size_t i = 0; i < 4; i++)
    {
	    if (i % 2 == 0)
		    animal[i] = new Dog();
	    else
		    animal[i] = new Cat();
    }
    delete j; 
    delete i;
    for (size_t i = 0; i < 4; i++)
    {
	    delete(animal[i]);
    }
    // system("leaks Brain");
}