/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:10:44 by yueli             #+#    #+#             */
/*   Updated: 2026/09/09 13:34:29 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    if (this != &other)
        AMateria::operator=(other);
    std::cout << "Ice copy assignment operator called" << std::endl;
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

AMateria    *Ice::clone() const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter &type)
{

}