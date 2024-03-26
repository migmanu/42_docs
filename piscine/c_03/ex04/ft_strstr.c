/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:15:48 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/22 16:16:19 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproduce the behavior of the
function strstr
*/

/*
char *strstr(const char *haystack, const char *needle)
strstr() finds the first occurrence of the needle
inside the haystack. It does not compare NUL.

strstr() returns a pointer to the beginning of the
found substring or NULL if no match.
*/

int	match(char *str, char *to_find, int str_indx)
{
	int	tf_indx;

	tf_indx = 1;
	while (to_find[tf_indx] != '\0')
	{
		if (to_find[tf_indx] != str[str_indx + tf_indx])
			return (0);
		tf_indx++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	str_indx;

	str_indx = 0;
	while (str[str_indx] != '\0')
	{
		if (str[str_indx] == to_find[0])
		{
			if (match(str, to_find, str_indx) == 1)
				return (&str[str_indx]);
		}
		str_indx++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[] = "hola mi mundo";
	char	to_find[] = "hola mi mundo lindo";

	//char	*result = ft_strstr(str, to_find);
	char	*result = strstr(str, to_find);
	printf("%s", result);
	return (0);
}*/
