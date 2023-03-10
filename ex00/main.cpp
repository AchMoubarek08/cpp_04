#include "polymorph.hpp"
#include "WrongAnimal.hpp"

class test
{
    public:
        test() { std::cout << "test constructor" << std::endl; }
        // test(test const & src) { std::cout << "test copy constructor" << std::endl; }
        // test & operator=(test const & rhs) { std::cout << "test copy assignment" << std::endl; return *this; }
        ~test() { std::cout << "test destructor" << std::endl; }
};

int main()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    std::cout << j->getType() << " sounds like: ";
    j->makeSound();
    std::cout << i->getType() << " sounds like: ";
    i->makeSound();
    std::cout << meta->getType() << " sounds like: ";
    meta->makeSound();

    std::cout << "------------WrongAnimal-------------" << std::endl;

    WrongAnimal* meta2 = new WrongAnimal();
    WrongAnimal* j2 = new WrongCat();
    std::cout << j2->getType() << " sounds like: ";
    j2->makeSound();
    std::cout << meta2->getType() << " sounds like: ";
    meta2->makeSound();
    return 0;
}