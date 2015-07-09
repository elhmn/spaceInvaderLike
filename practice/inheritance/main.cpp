/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmbarga <bmbarga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 19:16:22 by bmbarga           #+#    #+#             */
/*   Updated: 2015/06/21 00:08:19 by bmbarga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"
#include <iostream>


int		main(void)
{
	Class::verbose = true;

//	Class	*father = new SonPub(10);
	SonPub	*childPub = new SonPub(10)/*father*/;

	std::cout << std::endl;
	childPub->test();
	childPub->attack();
//	std::cout << "chilPub->n = " << childPub->n << std::endl;
	std::cout << "chilPub->m = " << childPub->m << std::endl;
//	std::cout << "father->n = " << father->n << std::endl;
//	static_cast<void>(father);
	static_cast<void>(childPub);
	delete childPub;
//	delete father;
	return (0);
}
