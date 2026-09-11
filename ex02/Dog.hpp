/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:12:34 by yueli             #+#    #+#             */
/*   Updated: 2026/09/08 23:24:46 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"
// #include <string>

class Dog : public Animal
{
private:

    Brain *brain;

public:

    Dog();
    Dog(const Dog &other);
    Dog  &operator=(const Dog &other);
    ~Dog();

    void    makeSound(void) const;

};

#endif