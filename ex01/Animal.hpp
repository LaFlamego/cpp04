/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:09:09 by yueli             #+#    #+#             */
/*   Updated: 2026/09/07 20:00:19 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

#include <string>

class Animal
{

protected:

    std::string type;

public:

    Animal();
    Animal(const std::string name);
    Animal(const Animal &other);
    Animal  &operator=(const Animal &other);
    virtual ~Animal();

    virtual void    makeSound(void) const;
    std::string     getType(void) const;

};

#endif