// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 18:22:26 by mcanal            #+#    #+#             //
//   Updated: 2015/06/21 14:27:43 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMY_CLASS_HPP

/*
** defines
*/
# define ENEMY_CLASS_HPP

/*
** includes
*/
# include "AUnit.class.hpp"

/*
** class
*/
class Enemy : public AUnit
{
	public:
		Enemy(char img = 'E');
		Enemy(Enemy const &copy);
		virtual ~Enemy(void);
		virtual Enemy	&operator=(Enemy const &copy);

		virtual void	move(char direction = LEFT);
};

#endif //ENEMY_CLASS_HPP
