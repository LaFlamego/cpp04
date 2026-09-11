/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 16:58:10 by yueli             #+#    #+#             */
/*   Updated: 2026/09/08 19:47:16 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
#include <iostream>

int main(void)
{
    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();

    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    for (int i = 0; i < size; i++)
        delete animals[i];

    Cat cat;
    cat.getBrain()->setIdea(0, "I am hungry");
    Cat kitty(cat);
    std::cout << cat.getBrain()->getIdea(0) << std::endl;
    std::cout << kitty.getBrain()->getIdea(0) << std::endl;
    kitty.getBrain()->setIdea(0, "I am sleepy");
    std::cout << cat.getBrain()->getIdea(0) << std::endl;
    std::cout << kitty.getBrain()->getIdea(0) << std::endl;
    
    return (0);
}
