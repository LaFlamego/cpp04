/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:30:21 by yueli             #+#    #+#             */
/*   Updated: 2026/09/09 13:03:07 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP_
# define _AMATERIA_HPP_

# include <string>

class ICharacter;

class   AMateria
{

protected:

    std::string type;

public:

    AMateria();
    AMateria(std::string const &type);
    AMateria(const AMateria &other);
    AMateria    &operator=(const AMateria &other);
    ~AMateria();
    std::string const   &getType() const;
    virtual AMateria    *clone() const = 0;
    virtual void        use(ICharacter &type);

};


#endif