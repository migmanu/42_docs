/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:58:55 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/28 21:11:10 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*result;

	len = max - min;
	if (len <= 0)
	{
		result = NULL;
		return (result);
	}
	result = (int *)malloc(len * sizeof(int));
	i = 0;
	while (i < len)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min = 9;
	int	max = 8;
	int	l = max - min;
	int i = 0;
	int	*arr = ft_range(min, max);
	while (i < l)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}*/
