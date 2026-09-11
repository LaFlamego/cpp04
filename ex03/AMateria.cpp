/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:40:48 by yueli             #+#    #+#             */
/*   Updated: 2026/09/09 13:01:49 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() : type("")
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
    std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other) : type(other.type)
{
    std::cout << "AMateria copy constructor called" << std::endl;
}
AMateria    &AMateria::operator=(const AMateria &other)
{
    (void)other;
    std::cout << "AMateria copy assignment operator called" << std::endl;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const   &AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}
