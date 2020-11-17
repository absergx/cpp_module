//
// Created by Meldred Emilio on 11/16/20.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

void meleeAttack(ClapTrap &attacker, ClapTrap &defender) {
	std::cout << "Melee attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.meleeAttack(defender.getName());
	defender.takeDamage(attacker.getMeleeAttackDamage());
}

void rangedAttack(ClapTrap &attacker, ClapTrap &defender) {
	std::cout << "Ranged attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.rangedAttack(defender.getName());
	defender.takeDamage(attacker.getRangedAttackDamage());
}

void randomAttack(FragTrap &attacker, ClapTrap &defender) {
	std::cout << "Random attack! " << attacker.getName() << " hits " << defender.getName() << std::endl;
	attacker.vaulthunterDotExe(defender.getName());
	defender.takeDamage(std::rand() % 30);
}

void randomChallenge(ScavTrap &attacker) {
	std::cout << "Random challenge! " << attacker.getName() << std::endl;
	attacker.challengeNewcomer();
}

void randomShoebox(NinjaTrap &ninja, ClapTrap &defender) {
	std::cout << "Random shoebox! " << ninja.getName() << " vs " << defender.getName() << std::endl;
	ninja.ninjaShoebox(defender);
}

int main() {
	FragTrap biba("Optimus Prime");
	FragTrap boba("Bumblebee");
	ScavTrap kuba("Megatron");
	ScavTrap keba("Starscream");
	NinjaTrap ninja("Fujibayashi Nagato");
	SuperTrap super("Tommy Vercetti");

	meleeAttack(biba, kuba);
	rangedAttack(keba, boba);
	meleeAttack(biba, boba);
	rangedAttack(kuba, keba);
	meleeAttack(keba, biba);
	rangedAttack(keba, kuba);
	randomAttack(boba, biba);
	randomAttack(biba, boba);
	meleeAttack(super, boba);
	rangedAttack(super, kuba);
	randomChallenge(keba);
	randomChallenge(kuba);
	randomShoebox(ninja, boba);
	randomShoebox(ninja, kuba);
	biba.beRepaired(15);
	boba.beRepaired(30);
	kuba.beRepaired(10);
	keba.beRepaired(20);
	super.beRepaired(40);
	return 0;
}
