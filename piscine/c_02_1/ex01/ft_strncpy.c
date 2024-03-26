/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:49:51 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/20 13:10:36 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	counter;
	int	src_length;
	int	s;

	s = (int) n;
	src_length = ft_strlen(src);
	counter = 0;
	while (counter < s)
	{
		if (counter >= src_length)
		{
			dest[counter] = '\0';
		}
		else
		{
			dest[counter] = src[counter];
		}
		counter++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char original_str[] = "a234567891b";
	char copy_str[11];
	unsigned int s = 4;

	ft_strncpy(copy_str, original_str, s);
	int counter = 0;
	while (counter < 6)
	{
		int a = copy_str[counter];
		printf("%d", a);
		counter++;
	}
	printf("\n");

	return (0);
}*/
