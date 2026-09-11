/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 22:38:42 by yueli             #+#    #+#             */
/*   Updated: 2026/09/07 22:41:19 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONG_ANIMAL_HPP_
# define _WRONG_ANIMAL_HPP_

#include <string>

class WrongAnimal
{

protected:

    std::string type;

public:

    WrongAnimal();
    WrongAnimal(const std::string name);
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal  &operator=(const WrongAnimal &other);
    virtual ~WrongAnimal();

    void    makeSound(void) const;
    std::string     getType(void) const;

};

#endif