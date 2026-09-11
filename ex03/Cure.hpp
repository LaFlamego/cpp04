/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 15:35:14 by yueli             #+#    #+#             */
/*   Updated: 2026/09/11 15:36:38 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_HPP_
# define _CURE_HPP_

# include "AMateria.hpp"

class   Cure : public AMateria
{

public:

    Cure();
    Cure(const Cure &other);
    Cure &operator=(const Cure &other);
    ~Cure();

    AMateria    *clone() const;
    void        use(ICharacter &type);

};

#endif