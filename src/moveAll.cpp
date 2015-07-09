// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   moveAll.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/21 22:23:12 by mcanal            #+#    #+#             //
//   Updated: 2015/06/21 22:23:13 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "retro.hpp"

bool		moveAll(char key, Obstacle **o, Enemy **e, Player *p)
{
	int		i, j;
	Missile	**pmiss = p->getMiss();

	i = 0;
	while (i < NB_MISSILE)
		pmiss[i++]->move(RIGHT);
    if (!checkAllCollisions(o, e, p))
		return false;
    if (key != SHOOT)
        p->move(key);
	i = 0;
	while (i < NB_OBSTACLE)
		o[i++]->move(LEFT);
	i = 0;
    while (i < NB_ENEMY)
	{
		j = 0;
		if (rand() % 3 == 2)
			e[i]->move(DOWN);
		else if (rand() % 3 == 0)
            e[i]->move(UP);
        e[i]->move(LEFT);
		Missile **emiss = e[i]->getMiss();
		while (j < NB_MISSILE)
			emiss[j++]->move(LEFT);
		j = 0;
		if (!checkAllCollisions(o, e, p))
			return false;
		emiss = e[i]->getMiss();
		while (j < NB_MISSILE)
            emiss[j++]->move(LEFT);
		i++;
	}
    if (!checkAllCollisions(o, e, p))
        return false;
	return true;
}
