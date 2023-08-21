/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 04:33:07 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/21 05:02:26 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
    const int numAnimals = 10; // Change this to the desired number of animals
    Animal* animals[numAnimals];

    for (int i = 0; i < numAnimals / 2; ++i) 
        animals[i] = new Dog();

    for (int i = numAnimals / 2; i < numAnimals; ++i)
        animals[i] = new Cat();

    // Delete all animals
    for (int i = 0; i < numAnimals; ++i) 
        delete animals[i];

    return 0;
}

