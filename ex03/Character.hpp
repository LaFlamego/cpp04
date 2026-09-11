/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 15:36:53 by yueli             #+#    #+#             */
/*   Updated: 2026/09/11 17:17:16 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

class   Character : public ICharacter
{

private:

    std::string name;
    AMateria    *inventory[4];

public:

    Character();
    Character(const std::string &name);
    Character(const Character &other);
    Character   &operator=(const Character &other);
    ~Character();

    std::string const &getName() const;
    void    equip(AMateria *m);
    void    unequip(int idx);
    void    use(int idx, ICharacter &target);

};

#endif