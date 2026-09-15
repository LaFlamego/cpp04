/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 01:44:40 by yueli             #+#    #+#             */
/*   Updated: 2026/09/13 01:49:01 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _IMATERIASOURCE_HPP_
# define _IMATERIASOURCE_HPP_

#include "AMateria.hpp"
# include <string>

class   AMateria;

class   IMateriaSource
{

public:

    virtual ~IMateriaSource() {}
    virtual void        learnMateria(AMateria*) = 0;
    virtual AMateria    *createMateria(std::string const &type) = 0;

};


#endif