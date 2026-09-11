/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 16:58:10 by yueli             #+#    #+#             */
/*   Updated: 2026/09/08 23:25:12 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
//#include <iostream>

int main(void)
{
    Animal *dog = new Dog();
    Animal *cat = new Cat();
    //Animal *animal = new Animal();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    return (0);
}
