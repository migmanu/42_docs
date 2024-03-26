/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:04:45 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/22 20:16:18 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproduce the behaviour of strcmp()
*/
/*
 - strcmp(const char *s1, const char *s2)
 - strcmp() returns an integer indicating the
   result of the comparison, as follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.
*/

int	strsize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index + 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (index <= strsize(s1))
	{
		if ((int)s1[index] > (int)s2[index])
			return ((int)s1[index] - (int)s2[index]);
		if ((int)s1[index] < (int)s2[index])
			return ((int)s1[index] - (int)s2[index]);
	index++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char a[] = "acr";
	char b[] = ".acr";
	char a2[] = "acr";
	char b2[] = ".acr";

	int result = strcmp(a, b);
	int result2 = ft_strcmp(a2, b2);
	printf("original:%d\n", result);
	printf("copy:%d\n", result2);
	return (0);
}*/
