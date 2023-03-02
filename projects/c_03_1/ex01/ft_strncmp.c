/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:33:16 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/23 13:01:14 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproduce the behaviour of strncmp()
*/
/*
 - strncmp(const char *s1, const char *s2, size_t n)
 - it compares only the first (at most) 
   n bytes of s1 and s2.
 - strncmp() returns an integer indicating the
   result of the comparison, as follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.
*/

unsigned int	strsize(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index + 1);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index <= strsize(s1) && index < n)
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
	char o_s1[] = "ab";
	char o_s2[] = "abc";
	char c_s1[] = "ab";
	char c_s2[] = "abc" ;
	int	n = 3;

	printf("orig %d\n", strncmp(o_s1, o_s2, n));
	printf("copy %d\n", ft_strncmp(c_s1, c_s2, n));
	return (0);
}*/
