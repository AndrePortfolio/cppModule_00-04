/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/19 12:31:28 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*----------------------------------------------------------------------------*/
/*------------------------- Constructors & Destructor -----------------------*/
/*----------------------------------------------------------------------------*/

Cat::Cat() : Animal()
{
	std::cout << "Cat Default Constructor called" << std::endl;

	type = "cat";
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;

	this->type = copy.type;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy Assignment Operator called" << std::endl;

	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

/*----------------------------------------------------------------------------*/
/*------------------------------ Member Functions ----------------------------*/
/*----------------------------------------------------------------------------*/

void	Cat::makeSound() const
{
	std::cout << "Miawwwww Miawwwww" << std::endl;
}