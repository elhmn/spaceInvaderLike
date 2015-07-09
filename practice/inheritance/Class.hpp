/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmbarga <bmbarga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 19:16:15 by bmbarga           #+#    #+#             */
/*   Updated: 2015/06/21 00:08:17 by bmbarga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLASS_HPP
# define CLASS_HPP

class	Class
{
	public:
		int				n;
		bool static		verbose;

//constructors//
		Class(void);
		Class(int const &n);
		void	attack(void) const;

//destructors//

		virtual ~Class(void);
	private:

		
};

class	SonPub : protected Class
{
	public:

//constructors//
		SonPub(void);
		SonPub(int const &n);
		void test(void) const;
		void attack(void) const;

//destructors//
		~SonPub(void);
//		virtual Class::~Class(void);
		int		m;
		int		e;

	private:

};

/*
class	SonPriv : private Class
{
	public:
		SonPriv(void);

	private:
		~SonPriv(void);
//		virtual Class::~Class(void);
};
*/
#endif//CLASS_HPP
