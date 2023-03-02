/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:21:40 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/23 15:47:00 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	type_check(char c)
{
	int	a;

	a = c;
	if (a == 32 || a == 43)
		return (3);
	if (a >= 9 && a <= 13)
		return (3);
	if (a == 45)
		return (2);
	if (a >= 48 && a <= 57)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] != '\0' && type_check(str[i]) != 0)
	{
		if (type_check(str[i]) == 1)
		{
			result *= 10;
			result += str[i] - '0';
		}
		if (type_check(str[i]) == 2)
			sign *= -1;
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi("-\t\n\v\f\r+		--12345sdf456"));

	return (0);
}*/
