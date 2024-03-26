/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:36:12 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/03/01 14:27:05 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	strleng(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_size(char **strs, char *sep, int size)
{
	int	result;
	int	i;
	int	c;

	result = 0;
	if (size == 0)
		return (0);
	i = 0;
	c = 0;
	while (i < size)
	{
		while (strs[i][c])
		{
			result++;
			c++;
		}
		c = 0;
		i++;
	}
	result = result + (strleng(sep) * (size - 1));
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		c;
	int		s;

	result = (char *)malloc(total_size(strs, sep, size) * sizeof(char));
	i = 0;
	c = 0;
	s = 0;
	while (i < size && size > 0)
	{
		while (strs[i][c])
			result[s++] = strs[i][c++];
		c = 0;
		while (sep[c] && i < size -1)
			result[s++] = sep[c++];
		c = 0;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	int	size = 8;
	char sep[] = "//";
	char *strs[] =
	{
		"hola",
		"mundo",
		"lindo",
		"mundo",
		"mundo",
		"mundo",
		"mundo",
		"mundo",
	};
	char *ptr = ft_strjoin(size, strs, sep);
	printf("%s", ft_strjoin(size, strs, sep));
	printf("\n\nif string empty this should be 0?: %d", ptr[0]);
	free(ptr);
	return (0);
}*/
