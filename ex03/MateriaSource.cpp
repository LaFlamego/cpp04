/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 13:46:41 by yueli             #+#    #+#             */
/*   Updated: 2026/09/13 16:10:08 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

//OCF

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        sources[i] = NULL;
    std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.sources[i] != NULL)
            sources[i] = other.sources[i]->clone();
        else
            sources[i] = NULL;
    }
    std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            delete sources[i];
            if (other.sources[i] != NULL)
                sources[i] = other.sources[i]->clone();
            else
                sources[i] = NULL;
        }
        std::cout << "MateriaSource copy assignment operator called" << std::endl;
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete sources[i];
    std::cout << "MateriaSource destructor called" << std::endl;
}

//feature
void    MateriaSource::learnMateria(AMateria* temp)
{
    int i = 0;

    if (temp != NULL)
    {
        while (i < 4)
        {
            if (!sources[i])
                break ;
            i++;
        }
        if (i == 4)
            return ;
        else
            sources[i] = temp->clone();
    }
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    if (type.empty())
        return (0);
    int i = 0;
    while (i < 4)
    {
        if (sources[i] && sources[i]->getType() == type)
            break ;
        i++;
    }
    if (i == 4)
        return (0);
    else
        return (sources[i]->clone());

}
