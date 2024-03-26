/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:54:48 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/21 16:47:23 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (index < size)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (index - 1);
}
/*
 - strlcpy(char *dest, char *src, size_t size) copies one string to another.
 - It takes the full size of the buffer, not just the lenght.
 - As long as n is larger than 0 it always NUL-terminates the result.
 - The byte fot NUL should be included in size.
 - strlcpy only operates on true C strings. src has to be NUL-terminated.
 - strlcpy copies up until size - 1 of src, NUL-terminating the dest.
 - strlcpy returns the total length of the dest it tried to create. This is the
   length of src.
*/
/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char o_str[] = "hola perro";
	int	size = 11;
	char d_str[size];
	int o_check = strlcpy(d_str, o_str, size);
	printf("Original: \n%s\n%d\n\n", d_str, o_check);
	int c_check = ft_strlcpy(d_str, o_str, size);	
	printf("Copy: \n%s\n%d\n\n", d_str, c_check);
	return (0);
}*/
