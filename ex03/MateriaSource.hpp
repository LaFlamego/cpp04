/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 13:02:45 by yueli             #+#    #+#             */
/*   Updated: 2026/09/13 18:34:42 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIASOURCE_HPP_
# define _MATERIASOURCE_HPP_

#include "AMateria.hpp"
# include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource
{

private:

    AMateria    *sources[4];

public:

    MateriaSource();
    MateriaSource(const MateriaSource &other);
    MateriaSource   &operator=(const MateriaSource &other);
    ~MateriaSource();

    void    learnMateria(AMateria* temp);
    AMateria    *createMateria(std::string const &type);
    
};


#endif