/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:12:49 by yueli             #+#    #+#             */
/*   Updated: 2026/09/07 20:13:02 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
# define _CAT_HPP_

#include "Animal.hpp"
// #include <string>

class Cat : public Animal
{

public:

    Cat();
    Cat(const Cat &other);
    Cat  &operator=(const Cat &other);
    ~Cat();

    void    makeSound(void) const;
};

#endif