/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 22:38:30 by yueli             #+#    #+#             */
/*   Updated: 2026/09/07 22:41:39 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONG_CAT_HPP_
# define _WRONG_CAT_HPP_

#include "WrongAnimal.hpp"
// #include <string>

class WrongCat : public WrongAnimal
{

public:

    WrongCat();
    WrongCat(const WrongCat &other);
    WrongCat  &operator=(const WrongCat &other);
    ~WrongCat();

    void    makeSound(void) const;
};

#endif