//
// Created by Meldred Emilio on 11/16/20.
//

// TODO rewrite this main

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void	ranged_attack(ClapTrap &attacking, ClapTrap &attacked)
{
	std::cout << "--- Ranged attack! ---" << std::endl;
	attacking.rangedAttack(attacked.getName());
	attacked.takeDamage(attacking.getRangedAttackDamage());
	std::cout << std::endl;
}

void	melee_attack(ClapTrap &attacking, ClapTrap &attacked)
{
	std::cout << "--- Melee attack! ---" << std::endl;
	attacking.meleeAttack(attacked.getName());
	attacked.takeDamage(attacking.getMeleeAttackDamage());
	std::cout << std::endl;
}

void	random_attack(FragTrap &attacking, ClapTrap &attacked)
{
	std::cout << "--- Random attack! ---" << std::endl;
	attacking.vaulthunterDotExe(attacked.getName());
	attacked.takeDamage(rand() % 30);
	std::cout << std::endl;
}

void	random_challenge(ScavTrap &scav_trap)
{
	std::cout << "--- Random challenge! ---" << std::endl;
	scav_trap.challengeNewcomer();
	std::cout << std::endl;
}

int		main()
{
	srand(time(nullptr));

	FragTrap	claptrap("claptrap");
	ScavTrap	gortys("gortys");
	FragTrap	dumpy("dumpy");
	ScavTrap	glory("glory");

//	ranged_attack(claptrap, gortys);
//	melee_attack(glory, claptrap);

//	random_challenge(glory);
//	melee_attack(dumpy, claptrap);
//
	random_attack(claptrap, dumpy);
	random_challenge(glory);
//
//	ranged_attack(gortys, glory);
//	claptrap.be_repaired(5);
//
	ranged_attack(claptrap, dumpy);
//	glory.be_repaired(13);
}