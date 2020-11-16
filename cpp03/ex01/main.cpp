//
// Created by Meldred Emilio on 11/15/20.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void meleeAttack(FragTrap &attacker, FragTrap &defender) {
	std::cout << "Melee attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.meleeAttack(defender.getName());
	defender.takeDamage(attacker.getMeleeAttackDamage());
}

void meleeAttack(FragTrap &attacker, ScavTrap &defender) {
	std::cout << "Melee attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.meleeAttack(defender.getName());
	defender.takeDamage(attacker.getMeleeAttackDamage());
}

void meleeAttack(ScavTrap &attacker, FragTrap &defender) {
	std::cout << "Melee attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.meleeAttack(defender.getName());
	defender.takeDamage(attacker.getMeleeAttackDamage());
}

void meleeAttack(ScavTrap &attacker, ScavTrap &defender) {
	std::cout << "Melee attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.meleeAttack(defender.getName());
	defender.takeDamage(attacker.getMeleeAttackDamage());
}

void rangedAttack(FragTrap &attacker, FragTrap &defender) {
	std::cout << "Ranged attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.rangedAttack(defender.getName());
	defender.takeDamage(attacker.getRangedAttackDamage());
}

void rangedAttack(FragTrap &attacker, ScavTrap &defender) {
	std::cout << "Ranged attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.rangedAttack(defender.getName());
	defender.takeDamage(attacker.getRangedAttackDamage());
}

void rangedAttack(ScavTrap &attacker, FragTrap &defender) {
	std::cout << "Ranged attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.rangedAttack(defender.getName());
	defender.takeDamage(attacker.getRangedAttackDamage());
}

void rangedAttack(ScavTrap &attacker, ScavTrap &defender) {
	std::cout << "Ranged attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.rangedAttack(defender.getName());
	defender.takeDamage(attacker.getRangedAttackDamage());
}

void randomAttack(FragTrap &attacker, FragTrap &defender) {
	std::cout << "Random attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.vaulthunterDotExe(defender.getName());
	defender.takeDamage(std::rand() % 30);
}

void randomChallenge(ScavTrap &attacker) {
	std::cout << "Random challenge! " << attacker.getName() << std::endl;
	attacker.challengeNewcomer();
}

int main() {
	FragTrap biba("Optimus Prime");
	FragTrap boba("Bumblebee");
	ScavTrap kuba("Megatron");
	ScavTrap keba("Starscream");

	meleeAttack(biba, kuba);
	rangedAttack(keba, boba);
	meleeAttack(biba, boba);
	rangedAttack(kuba, keba);
	meleeAttack(keba, biba);
	rangedAttack(keba, kuba);
	randomAttack(boba, biba);
	randomAttack(biba, boba);
	randomChallenge(keba);
	randomChallenge(kuba);
	biba.beRepaired(15);
	boba.beRepaired(30);
	kuba.beRepaired(10);
	keba.beRepaired(20);
	return 0;
}
