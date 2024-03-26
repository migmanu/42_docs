/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:01:25 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/27 12:26:36 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	getlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

void	r_writer(long int n, char *base, int bl)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n != 0)
	{
		r_writer(n / bl, base, bl);
		write(1, &base[n % bl], 1);
	}
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			bl;

	n = nbr;
	bl = getlen(base);
	if (bl <= 1)
		return ;
	if (check_base(base) == 0)
		return ;
	r_writer(n, base, bl);
}
/*
#include <stdio.h>
int	main(void)
{
	int		nbr = -158;
	char	binary[] = "01";
	char	hex[] = "0123456789ABCDEF";
	char	oct[] = "01234567";
	printf("binary:\n");
	ft_putnbr_base(nbr, binary);
	printf("\nhex:\n");
	ft_putnbr_base(nbr, hex);
	printf("\noct:\n");
	ft_putnbr_base(nbr, oct);
	return (0);
}*/
