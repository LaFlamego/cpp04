/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 18:24:21 by yueli             #+#    #+#             */
/*   Updated: 2026/09/13 18:59:56 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
    // {
    //     IMateriaSource *src = new MateriaSource();
    //     src->learnMateria(new Ice());
    //     src->learnMateria(new Cure());

    //     ICharacter *me = new Character("me");

    //     AMateria *tmp;
    //     tmp = src->createMateria("ice");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);

    //     ICharacter *bob = new Character("bob");

    //     me->use(0, *bob);
    //     me->use(1, *bob);

    //     delete bob;
    //     delete me;
    //     delete src;

    //     return (0);
    // }

    {
        IMateriaSource *src = new MateriaSource();
        AMateria *ice = new Ice();
        AMateria *cure = new Cure();
        src->learnMateria(ice);
        delete ice;
        src->learnMateria(cure);
        delete cure;

        ICharacter *me = new Character("me");

        AMateria *tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);

        ICharacter *bob = new Character("bob");

        me->use(0, *bob);
        me->use(1, *bob);

        delete bob;
        delete me;
        delete src;

        return (0);
    }

    // {
    //     Character a("Alice");

    //     AMateria *ice = new Ice();
    //     a.equip(ice);

    //     Character b(a);

    //     a.unequip(0);
    //     delete ice;

    //     b.use(0, b);
    // }

    // {
    //     MateriaSource src1;

    //     AMateria *ice = new Ice();
    //     src1.learnMateria(ice);
    //     delete ice;

    //     MateriaSource src2(src1);

    //     AMateria *m1 = src1.createMateria("ice");
    //     AMateria *m2 = src2.createMateria("ice");

    //     delete m1;
    //     delete m2;
    // }
}
