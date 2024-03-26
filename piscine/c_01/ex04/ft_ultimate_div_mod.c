/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:04:19 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/15 11:37:02 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int	main(void)
{
	int e = 10;
	int f = 2;
	int *ptre = &e;
	int *ptrf = &f;

	ft_ultimate_div_mod(ptre, ptrf);	
	printf("e es now: %d and f is now: %d", e, f);	
	return (0);
}*/
