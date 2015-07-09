/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmbarga <bmbarga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 19:14:07 by bmbarga           #+#    #+#             */
/*   Updated: 2015/06/21 00:08:48 by bmbarga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"
#include <iostream>

//Class definition 

bool	Class::verbose = false;
//constructors//

Class::Class(void)
{
	if (Class::verbose)
	{
		std::cout << "Class " << std::endl;
		std::cout << "constructor called"  << std::endl;
	}
	this->n = 0;
}

Class::Class(int const &n) : n(n)
{
	if (Class::verbose)
	{
		std::cout << "Class " << std::endl;
		std::cout << "constructor called"  << std::endl;
	}
}

Class::~Class(void)
{
	if (Class::verbose)
	{
		std::cout << "Class " << std::endl;
		std::cout << "destructor called"  << std::endl;
	}
}

//others//

void	Class::attack(void) const
{
	std::cout << "Class father attacked" << std::endl;
}

//SonPub definition 

SonPub::SonPub(int const &n): Class(n)
{
	this->m = this->n;
	if (SonPub::verbose)
	{
		std::cout << "SonPub " << std::endl;
		std::cout << "constructor called"  << std::endl;
	}
}

void	SonPub::attack(void) const
{
	Class::attack();
	std::cout << "##################" << std::endl;
}

void	SonPub::test(void) const
{
	Class::attack();
}

SonPub::SonPub(void)
{
	if (Class::verbose)
	{
		std::cout << "SonPub " << std::endl;
		std::cout << "constructor called"  << std::endl;
	}
}

SonPub::~SonPub(void)
{
	if (Class::verbose)
	{
		std::cout << "SonPub " << std::endl;
		std::cout << "destructor called"  << std::endl;
	}
}

/*
SonPub::~Class(void)
{
	if (Class::verbose)
	{
		std::cout << "SonPub ~Class " << std::endl;
		std::cout << "destructed called"  << std::endl;
	}	
}
*/
