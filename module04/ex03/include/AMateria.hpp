#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "main.hpp"

#endif

class AMateria {
    protected:
        std::string type;

    public:
        AMateria(const std::string& type);
        AMateria(const AMateria& amateria);
        virtual ~AMateria();
        AMateria& operator = (const AMateria& amateria);

        const std::string&  getType() const; // Returns the materia type
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};
