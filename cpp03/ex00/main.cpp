//
// Created by Meldred Emilio on 11/15/20.
//

#include "FragTrap.hpp"

void meleeAttack(FragTrap &attacker, FragTrap &defender) {
	std::cout << "Melee attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.meleeAttack(defender.getName());
	defender.takeDamage(attacker.getMeleeAttackDamage());
 }

void rangedAttack(FragTrap &attacker, FragTrap &defender) {
	std::cout << "Ranged attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.rangedAttack(defender.getName());
	defender.takeDamage(attacker.getRangedAttackDamage());
}

void randomAttack(FragTrap &attacker, FragTrap &defender) {
	std::cout << "Random attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.vaulthunterDotExe(defender.getName());
	defender.takeDamage(std::rand() % 30);
}

int main() {
	FragTrap biba("Optimus Prime");
	FragTrap boba("Bumblebee");
	FragTrap buba("Megatron");

	meleeAttack(biba, boba);
	rangedAttack(boba, buba);
	randomAttack(buba, biba);
	biba.beRepaired(15);
	boba.beRepaired(40);
    return 0;
}