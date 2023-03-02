/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:38:50 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/03/01 20:48:22 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	getlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

int	c_check(char c, char *base)
{
	int	a;
	int	i;

	a = c;
	if (a == 32 || a == 43)
		return (3);
	if (a >= 9 && a <= 13)
		return (3);
	if (a == 45)
		return (2);
	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

char	*get_nbr(char *nbr, char *base, int i, int sign)
{
	char	*result;
	int		c;

	c = i;
	while (c_check(nbr[c], base) == 1)
		c++;
	if (sign < 0)
		c++;
	result = (char *)malloc((c - i) * sizeof(char));
	c = 0;
	if (sign < 0)
	{
		result[0] = '-';
		c++;
	}
	while (c_check(nbr[i], base) == 1)
	{
		result[c] = nbr[i];
		i++;
		c++;
	}
	return (result);
}

char	*clean_nbr(char *nbr, char *base)
{
	char	*result;
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	while (nbr[i] != '\0')
	{
		if (c_check(nbr[i], base) == 1)
		{
			result = get_nbr(nbr, base, i, sign);
			break ;
		}
		if (c_check(nbr[i], base) == 2)
			sign *= -1;
		if (c_check(nbr[i], base) == 0)
			break ;
		i++;
	}
	return (result);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (getlen(base) < 2)
		return (0);
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
