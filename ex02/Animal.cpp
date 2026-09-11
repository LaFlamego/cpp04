/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:24:02 by yueli             #+#    #+#             */
/*   Updated: 2026/09/08 23:11:15 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const std::string name) : type(name)
{
    std::cout << "Animal name constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal  &Animal::operator=(const Animal &other)
{
    if (this != &other)
        type = other.type;
    std::cout << "Animal copy assignment operator called" << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

// void    Animal::makeSound(void) const
// {
//     std::cout << "Animal sound in" << std::endl;
// }

std::string Animal::getType(void) const
{
    return (type);
}
