#include "main.hpp"
#include "AMateria.hpp"
/* class AMateria {
    protected:
        std::string type;

    public:
        AMateria(const std::string& type);
        AMateria(const AMateria& amateria);
        virtual ~AMateria();
        AMateria& operator=(const AMateria& amateria);

        const std::string&  getType() const; // Returns the materia type
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
}; */

AMateria::AMateria(const std::string& type) {
	this->type = type;
};

AMateria::AMateria(const AMateria& amateria) {
	*this = amateria;
};

AMateria::~AMateria() {
};

AMateria& AMateria::operator=(const AMateria& amateria) {
	if (this == &amateria) {
		return *this;
	}
}

const std::string&	AMateria::getType() const {
	return this->type;
}

