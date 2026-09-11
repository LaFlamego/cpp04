/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 22:54:06 by yueli             #+#    #+#             */
/*   Updated: 2026/09/07 22:55:04 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() : type("")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string name) : type(name)
{
    std::cout << "WrongAnimal name constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
        type = other.type;
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal sound in" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}