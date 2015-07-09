// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AUnit.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 18:22:05 by mcanal            #+#    #+#             //
//   Updated: 2015/06/21 18:11:08 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AUNIT_CLASS_HPP

/*
** defines
*/
# define AUNIT_CLASS_HPP

/*
** includes
*/
# include "AStuff.class.hpp"
# include "Missile.class.hpp"

/*
** class
*/
class AUnit : public AStuff
{
	public:
		AUnit(char img = 'U');
		AUnit(AUnit const &copy);
		virtual ~AUnit(void);
		virtual AUnit		&operator=(AUnit const &copy);

		void				shoot(bool player = true);
		virtual void		move(char direction = RIGHT);
		Missile				**getMiss(void) const;

	private:
		Missile	 **_miss;
};

#endif //AUNIT_CLASS_HPP
