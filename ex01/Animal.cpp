/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 04:33:19 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/20 04:41:42 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal constructor was called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor was called" << std::endl;
}

std::string Animal::getType()
{
    return (_type);
}

void Animal::makeSound()
{
    std::cout << "Animal sound" << std::endl;
}