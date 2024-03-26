/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:47:51 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/11 18:50:19 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rush(int x, int y);
void	rush_selector(int x, int y, int s);

void	rush_selector(int x, int y, int s)
{
	// followwing two vars just declared to temp avoid -Werror error
	x = 1;
	y = 1;
	if (s == 0)
	{
		// replace next line with proper function call
		write(1, &s, 1);
	}
	else if (s == 1)
	{
		write(1, &s, 1);
	}
	else if (s == 2)
	{
		write(1, &s, 1);
	}
	else if (s == 3)
	{
		write(1, &s, 1);
	}
	if (s == 4)
	{
		write(1, &s, 1);
	}
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	selector;

	x = argv[1][0] - '0';
	y = argv[2][0] - '0';
	//if less than 2 or more than 3 arguments passed
	if (argc < 3 || argc > 4)
	{
		return (0);
	}
	if (argv[3] != NULL)
	{
		selector = argv[3][0] - '0';
		rush_selector(1, 2, selector);
	}
	printf("x is: %d, y is: %d |", x, y);
	rush(x, y);
	return (0);
}
