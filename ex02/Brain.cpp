/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 04:40:04 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/21 04:46:18 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain contructor called" << std::endl;
    for (int i = 0; i < 100; ++i)
    {
        _ideas[i] = "Undefined idea";
    }
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
    {
        _ideas[index] = idea;
    }
}

std::string Brain::getIdea(int index)
{
    if (index >= 0 && index < 100)
    {
        return _ideas[index];
    }
    return ("Index out of range");
}