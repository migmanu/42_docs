/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:26:26 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/15 11:34:53 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	mem;

	mem = *a;
	*a = *b;
	*b = mem;
}
/*
int	main(void)
{
	int c = 3;
	int d = 2;

	int *a;
	int *b;

	a = &c;
	b = &d;
	ft_swap(a, b);
	return (0);
}*/
