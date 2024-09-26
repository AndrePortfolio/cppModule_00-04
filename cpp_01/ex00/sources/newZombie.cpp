/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:47:47 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 16:11:00 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie *newZombie;

	newZombie = new Zombie(name);
	if (!newZombie)
	{
		std::cerr << "Failed to allocate memory for Zombie object" << std::endl;
		return (NULL);
	}
	return (newZombie);
}