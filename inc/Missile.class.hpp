// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Missile.class.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 18:22:37 by mcanal            #+#    #+#             //
//   Updated: 2015/06/21 14:28:01 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MISSILE_CLASS_HPP

/*
** defines
*/
# define MISSILE_CLASS_HPP

/*
** includes
*/
# include "AStuff.class.hpp"

/*
** class
*/
class Missile : public AStuff
{
	public:
		Missile(char img = 'M');
		Missile(Missile const &copy);
		virtual ~Missile(void);
		virtual Missile		&operator=(Missile const &copy);

		virtual void		move(char direction = RIGHT);
};

#endif //MISSILE_CLASS_HPP
