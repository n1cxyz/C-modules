#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "main.hpp"

class Character : public ICharacter {
	protected:
		const std::string	name;
		AMateria*			inventory[4];
	public:
				Character(const std::string name);
				~Character();
        const	std::string& getname() const;
        void    equip(AMateria* m);
        void    unequip(int idx);
        void    use(int idx, ICharacter* target);
};

#endif