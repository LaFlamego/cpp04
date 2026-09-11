/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:12:34 by yueli             #+#    #+#             */
/*   Updated: 2026/09/07 20:13:08 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "Animal.hpp"
// #include <string>

class Dog : public Animal
{

public:

    Dog();
    Dog(const Dog &other);
    Dog  &operator=(const Dog &other);
    ~Dog();

    void    makeSound(void) const;

};

#endif