/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:55:05 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/23 11:25:02 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	l;
	char		r;

	l = nb;
	if (l < 0)
	{
		write(1, "-", 1);
		l = -l;
	}
	if (l <= 9)
	{
		r = l + '0';
		write(1, &r, 1);
	}
	else
	{
		ft_putnbr(l / 10);
		ft_putnbr(l % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}*/
