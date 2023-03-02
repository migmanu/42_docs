/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:56:11 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/11 18:37:22 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	line_writer(char a, char b, char c, int x)
{
	int	x_axis_counter;

	write(1, &a, 1);
	x_axis_counter = 0;
	while (x_axis_counter < x - 2)
	{
		ft_putchar(b);
		x_axis_counter++;
	}
	if (x > 1)
	{
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

void	line_identifier(int y_position, int y, int line_length)
{
	char	first_character;
	char	middle_character;
	char	last_character;

	if (y_position == 0)
	{
		first_character = 'A';
		middle_character = 'B';
		last_character = 'C';
	}
	else if (y_position == y - 1)
	{
		first_character = 'A';
		middle_character = 'B';
		last_character = 'C';
	}
	else
	{
		first_character = 'B';
		middle_character = ' ';
		last_character = 'B';
	}
	line_writer(first_character, middle_character, last_character, line_length);
}

void	rush(int x, int y)
{
	int	y_axis_counter;

	printf("rush init |");
	y_axis_counter = 0;
	printf("y is: %d and counter is %d  |", y, y_axis_counter);
	while (y_axis_counter < y)
	{
		line_identifier(y_axis_counter, y, x);
		y_axis_counter++;
	}
}
