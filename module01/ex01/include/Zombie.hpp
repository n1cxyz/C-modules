#include "iostream"
#include "unistd.h"

class Zombie {
    private:
        std::string name;

    public:
        Zombie();
		~Zombie();
        void    announce(void);
        void    setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);