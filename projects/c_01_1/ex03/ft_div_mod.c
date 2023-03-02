/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:55:21 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/15 11:35:45 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 15;
	int b = 4;
	int div_result;
	int mod_result;
	int *div;
	int *mod;
	
	div = &div_result;
	mod = &mod_result;
	
	ft_div_mod(a, b, div, mod);
	printf("div_result is : %d and mod_result is: %d", div_result, mod_result);
	return (0);
}*/
