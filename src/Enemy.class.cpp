// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 18:25:49 by mcanal            #+#    #+#             //
//   Updated: 2015/06/21 20:30:06 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Enemy.class.hpp"

/*
** constructor
*/
Enemy::Enemy(char img) : AUnit(img)
{
	if (DEBUG) this->debug("Enemy constructed (default).");
    this->setX(WIDTH - 1);
    this->setY(rand() % (HEIGHT - 1));
    this->setAlive(false);                         
}

Enemy::Enemy(Enemy const &copy)
{
	if (DEBUG) this->debug("Enemy constructed (copy).");

	*this = copy;
}

/*
** destructor
*/
Enemy::~Enemy(void)
{
	if (DEBUG) this->debug("Enemy desstructed.");
}

/*
** operator overload
*/
Enemy					&Enemy::operator=(Enemy const &copy)
{
	AUnit::operator=(copy);

	return *this;
}

/*
** public
*/
void					Enemy::move(char direction)
{
	AUnit::move(direction);
}
