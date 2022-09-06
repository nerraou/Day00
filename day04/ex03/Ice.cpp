#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
}

Ice::Ice(const Ice &other)
{
    *this = other;
}

AMateria *Ice::clone() const
{
    Ice *iceMateria = new Ice(*this);
    return iceMateria;
}

void Ice::use(ICharacter &target)
{
    std::cout << "Ice: shoots an ice bolt at " << target.getName() << std::endl;
}

Ice &Ice::operator=(Ice const &other)
{
    (void)other;
    return (*this);
}
Ice::~Ice()
{
}
