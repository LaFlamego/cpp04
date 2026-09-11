/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 14:29:45 by yueli             #+#    #+#             */
/*   Updated: 2026/09/09 18:01:21 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICHARACTER_HPP_
# define _ICHARACTER_HPP_

#include "AMateria.hpp"
#include <string>

class   AMateria;

class   ICharacter
{
public:

    virtual ~ICharacter() {};
    virtual std::string const &getName() const = 0;
    virtual void    equip(AMateria *m) = 0;
    virtual void    unequip(int idx) = 0;
    virtual void    use(int idx, ICharacter &target) = 0;

};


#endif