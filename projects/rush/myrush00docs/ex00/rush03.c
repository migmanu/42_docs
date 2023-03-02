/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:44:47 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/12 20:56:21 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	line_writer(char char_1, char char_2, char char_3, int x)
{
	int	x_counter;

	if (x > 0)
	{
		ft_putchar(char_1);
		x_counter = 0;
		while (x_counter < x - 2)
		{
			ft_putchar(char_2);
			x_counter++;
		}
		if (x > 1)
		{
			ft_putchar(char_3);
		}
		ft_putchar('\n');
	}
}

void	line_maker(int x, int y)
{
	int	counter;

	counter = 0;
	if (y > 0 || x > 0)
	{
		while (counter < y)
		{
			if (counter == 0)
			{
				line_writer('A', 'B', 'C', x);
			}
			else if (counter == y - 1)
			{
				line_writer('C', 'B', 'A', x);
			}
			else
			{
				line_writer('B', ' ', 'B', x);
			}
		counter++;
		}
	}
}

void	rush(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(1, "X and Y must both be > 0", 24);
	}	
	line_maker(x, y);
}
