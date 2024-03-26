/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:21:40 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/26 14:57:38 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*rev_arr(char *str, int size)
{
	int		first_counter;
	int		second_counter;
	char	mem;

	first_counter = 0;
	second_counter = size - 1;
	while (first_counter < second_counter)
	{
		mem = str[first_counter];
		str[first_counter] = str[second_counter];
		str[second_counter] = mem;
		first_counter++;
		second_counter--;
	}
	return (str);
}

int	strleng(char *str)
{
	int	result;

	result = 0;
	while (str[result] != '\0')
		result++;
	return (result);
}

unsigned int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	result;
	int				size;

	size = strleng(str);
	str = rev_arr(str, size);
	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "4321";
	printf("%d", ft_atoi(str));
	return (0);
}*/
