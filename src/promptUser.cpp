// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   promptUser.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 19:29:55 by mcanal            #+#    #+#             //
//   Updated: 2015/06/21 21:26:37 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "retro.hpp"

//cf. AStuff.class.hpp for defines

char promptUser(void)
{
	char		car = 0;

	if ((car = static_cast<char>(getch())) != ERR)
		flushinp();
	if (car == EXIT)
	{
		endwin();
		exit(0);//end game;
	}

	return (car);
}
