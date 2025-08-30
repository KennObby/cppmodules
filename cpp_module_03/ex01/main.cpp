/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 13:44:03 by oilyine-          #+#    #+#             */
/*   Updated: 2025/08/24 13:54:21 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"   // includes ClapTrap.hpp internally
#include <iostream>
#include <string>

static void section(const char* title) {
    std::cout << "\n--- " << title << " ---\n";
}

int main() {
    section("Creating ClapTraps");
    ClapTrap Bilal("Alpha", 10, 1, 1);
    ClapTrap Deby ("Bravo", 10, 1, 1);
    ClapTrap Melvin("Charlie", 10, 1, 1);

    section("Creating ScavTraps");
    ScavTrap Oleg ("Lego");
    ScavTrap Le_J ("Julius");
    ScavTrap Eliot("Orvalius");

    section("Basic attacks");
    Oleg.attack("Orvalius");
    Le_J.attack("Lego");
    Eliot.attack("Julius");
    Bilal.attack("Bravo");
    Deby.attack("Charlie");

    section("Damage & repair demo");
    Eliot.takeDamage(30);
    Eliot.beRepaired(10);
    Eliot.takeDamage(100);

    section("Gate keeper mode");
    Le_J.guardGate();

    section("Energy drain (short)");
    for (int i = 0; i < 55; ++i)
        Oleg.attack("Training dummy");

    section("Polymorphic calls via base pointer");
    ClapTrap* party[3];
    party[0] = &Bilal;
    party[1] = &Le_J;
    party[2] = &Melvin;
    for (int i = 0; i < 3; ++i)
        party[i]->attack("poly-target");
    section("Done");
    return 0;
}
