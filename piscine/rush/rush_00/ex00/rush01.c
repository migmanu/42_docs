/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilke <dwilke@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:28:13 by dwilke            #+#    #+#             */
/*   Updated: 2023/02/12 21:40:42 by dwilke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	put_first_line(int x)
{
	int	i;

	i = 1;
	if (x > 0)
	{
		ft_putchar('/');
	}
	while (i < x - 1)
	{
		ft_putchar('*');
		i++;
	}
	if (i == x - 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	put_last_line(int x)
{
	int	i;

	i = 1;
	if (x > 0)
	{
		ft_putchar('\\');
	}
	while (i < x - 1)
	{
		ft_putchar('*');
		i++;
	}
	if (i == x - 1)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	put_mid_line(int x)
{
	int	i;

	i = 1;
	if (x > 0)
	{
		ft_putchar('*');
	}
	while (i < x - 1)
	{
		ft_putchar(' ');
		i++;
	}
	if (i == x - 1)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		write(1, "Negative value or 0 for columns or lines!!!\n", 44);
		return ;
	}
	while (i < y)
	{
		if (i == 0)
		{
			put_first_line(x);
		}
		else if (i > 0 && i < y - 1)
		{
			put_mid_line(x);
		}
		else if (i == y - 1)
		{
			put_last_line(x);
		}
		i++;
	}
}
