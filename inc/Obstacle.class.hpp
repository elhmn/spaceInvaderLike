// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Obstacle.class.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 18:22:51 by mcanal            #+#    #+#             //
//   Updated: 2015/06/21 14:28:23 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef OBSTACLE_CLASS_HPP

/*
** defines
*/
# define OBSTACLE_CLASS_HPP

/*
** includes
*/
# include "AStuff.class.hpp"

/*
** class
*/
class Obstacle : public AStuff
{
	public:
		Obstacle(char img = 'O');
		Obstacle(Obstacle const &copy);
		virtual ~Obstacle(void);
		virtual Obstacle	&operator=(Obstacle const &copy);

		virtual void		move(char direction = LEFT);
};

#endif //OBSTACLE_CLASS_HPP
