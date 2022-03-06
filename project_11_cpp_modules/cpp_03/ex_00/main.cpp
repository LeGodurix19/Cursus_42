#include "ClapTrap.hpp"

int main()
{
	ClapTrap remi("Remi");

	remi.attack("Bob1");
    remi.attack("Bob2");
    remi.attack("Bob3");
    remi.attack("Bob4");
    remi.attack("Bob5");
    remi.attack("Bob6");
    remi.attack("Bob7");
    remi.attack("Bob8");
    remi.attack("Bob9");
    remi.attack("Bob10");
    remi.attack("Bob11");
	remi.takeDamage(4);
	remi.beRepaired(1);
	remi.takeDamage(8);
	remi.takeDamage(1);
	remi.beRepaired(5);
}