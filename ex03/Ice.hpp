/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:04:13 by yueli             #+#    #+#             */
/*   Updated: 2026/09/09 13:08:45 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_HPP_
# define _ICE_HPP_

# include "AMateria.hpp"

class   Ice : public AMateria
{

public:

    Ice();
    Ice(const Ice &other);
    Ice &operator=(const Ice &other);
    ~Ice();

    AMateria    *clone() const;
    void        use(ICharacter &type);

};

#endif