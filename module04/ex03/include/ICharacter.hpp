#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "main.hpp"

class ICharacter {
    protected:

    public:
        virtual         ~ICharacter();
        virtual const   std::string& getname() const = 0;
        virtual void    equip(AMateria* m) = 0;
        virtual void    unequip(int idx) = 0;
        virtual void    use(int idx, ICharacter* target) = 0;
};

#endif