/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:40:57 by yueli             #+#    #+#             */
/*   Updated: 2026/09/08 19:47:27 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
    brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat  &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meow~" << std::endl;
}

Brain *Cat::getBrain(void) const
{
    return (brain);
}