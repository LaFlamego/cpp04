/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 15:37:02 by yueli             #+#    #+#             */
/*   Updated: 2026/09/11 19:11:03 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

//OCF
Character::Character() : name("")
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    std::cout << "Character constructor called" << std::endl;
}
Character::Character(const std::string &name) : name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    std::cout << "Character name constructor called" << std::endl;
}
Character::Character(const Character &other) : name(other.name)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i] != NULL)
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
    std::cout << "Character copy constructor called" << std::endl;
}
Character   &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; i++)
        {
            delete inventory[i];
            if (other.inventory[i] != NULL)
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
        std::cout << "Character copy assignment operator called" << std::endl;
    }
    return (*this);
}
Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete inventory[i];
    std::cout << "Character destructor called" << std::endl;
}

//feature
std::string Character::const &getName() const
{
    return (name);
}

void    Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
            break ;
    }
    if (i == 3)
        return ;
    

}

void    Character::unequip(int idx)
{

}

void    Character::use(int idx, ICharacter &target)
{

}