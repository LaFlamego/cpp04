/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:12:49 by yueli             #+#    #+#             */
/*   Updated: 2026/09/08 19:47:21 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
# define _CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"
// #include <string>

class Cat : public Animal
{

private:

    Brain *brain;

public:

    Cat();
    Cat(const Cat &other);
    Cat  &operator=(const Cat &other);
    ~Cat();

    void    makeSound(void) const;
    Brain   *getBrain(void) const;
};

#endif