/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmbarga <bmbarga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 23:20:37 by bmbarga           #+#    #+#             */
/*   Updated: 2015/06/21 05:32:00 by bmbarga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <ctime>
#include <string>
#include <unistd.h>

#define VELY	1	
#define VELX	3
#define DELAY 50000
#define WIDTH 50
#define HEIGHT 50

void	fill_win(WINDOW *win, int h, int w, int sx, int sy)
{
	int		i = -1;
	int		j;

	(void)sx;
	(void)sy;
	if (!win)
		std::cout << "Error set to null window" << std::endl;
	while (++i < h)
	{
		j = -1;
		while (++j < w)
		{
			if (!(rand() % 10))
				mvprintw(i, j, "o", win);
		}
	}
}

WINDOW	*create_newWindow(int height, int width, int sx, int sy)
{
	WINDOW	*localWindow = NULL;

	localWindow = newwin(height, width, sx, sy);
	if (!localWindow)
		std::cout << "Error create window" << std::endl;
//	box(localWindow, 'e', 'e');
	fill_win(localWindow, height, width, sx, sy);
	wrefresh(localWindow);
	return (localWindow);
}

void	destroy_win(WINDOW *win)
{
	if (win)
	{
		wborder(win, ' ', ' ', ' ',' ',' ',' ',' ',' ');
		wrefresh(win);
		delwin(win);
	}
}

int		main(int ac, char **av)
{
	(void)av;
//	int		max_x = 0;
//	int		max_y = 0;
	int		x = 0;
	int		y = 0;
	int		car;
	int		vely = VELY;
	int		velx = VELX;
	WINDOW	*win;

	setlocale(LC_ALL, "");
	win = NULL;
//	int		ch;
	if (ac)
	{
		initscr();      	// Initialize the window
		timeout(30);
//		intrflush(stdscr, TRUE);
//		qiflush();
		if (has_colors() == FALSE)
		{
			std::cout << "Your term dont handle colors" << std::endl;
			return (1);
		}
		start_color();		//start color
		init_pair(1, COLOR_WHITE, COLOR_BLUE); //set a pair color (fg and bg) that u can use
		if (can_change_color() == FALSE)
		{
			std::cout << "Your term cant change colors" << std::endl;
			return (1);
		}
		init_color(COLOR_RED, 0, 500, 500); //col value goes from 0 to 1000
		init_pair(2, COLOR_RED, COLOR_WHITE); //set a pair color (fg and bg) that u can use
		noecho();       	// Don't echo any keypresses
		curs_set(FALSE);	// Don't display a cursor
		raw();				// get char without waiting a end of line
//		cbreak();		//same but still get signal from term string
		keypad(stdscr, TRUE);	// add other char like F1
//		halfdelay(1);		// wait a char form user until a certain time
		srand(time(NULL));
		while (42)
		{
//			destroy_win(win);
//			getmaxyx(stdscr, max_y, max_x); //get max window size
			if ((car = getch()) != ERR)
			{
				flushinp();
				refresh();
				clear();
			}
			if (car == 'q')
				break;
			else if (car == 'w')
			{
				y -= vely;
//				vel = VEL;
			}
			else if (car == 's')
			{
//				vel = VEL;
				y += vely;
			}
			else if (car == 'a')
			{
				x -= velx;
			}
			else if (car == 'd')
			{
				x += velx;
			}
			attron(COLOR_WHITE);
//			mvaddch(y, x, (wchar_t)('►'));
			mvprintw(y, x, "►");
//			mvprintw(y, x, "\u9658");
//			mvaddch(y, x, '►');
			attroff(COLOR_WHITE);
					/*
			attron(COLOR_RED);
			win = create_newWindow(HEIGHT, WIDTH, 0, 0);
			attroff(COLOR_RED);
			mvaddch(rand() % max_y, rand() % max_x, '@' | A_BOLD | A_UNDERLINE);
			attron(A_BOLD | A_UNDERLINE);
			mvprintw(rand() % max_y, rand() % max_x, "@");
			attroff(A_BOLD | A_UNDERLINE);
			mvprintw(rand() % max_y, rand() % max_x, "O");
			*/
			usleep(DELAY);
		}
		endwin(); //end window
	}
	return (0);
}
