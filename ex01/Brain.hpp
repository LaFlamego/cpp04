/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yueli <yueli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:40:03 by yueli             #+#    #+#             */
/*   Updated: 2026/09/08 19:47:33 by yueli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

#include <string>

class   Brain
{

private:

    std::string ideas[100];

public:

    Brain();
    Brain(const Brain &other);
    Brain   &operator=(const Brain &other);
    ~Brain();

    void    setIdea(int index, const std::string &idea);
    std::string getIdea(int index) const;
};


#endif