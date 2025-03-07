/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:23:03 by jmartos-          #+#    #+#             */
/*   Updated: 2024/08/22 19:16:48 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	Crea un zombie para "guardarlo"...
*/
Zombie	*newZombie(std::string name)
{
	Zombie	*newZombie;

	newZombie = new Zombie(name);
	return (newZombie);
}
