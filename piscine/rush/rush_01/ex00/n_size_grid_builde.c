/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_size_grid_builde.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sveselov <sveselov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:36:50 by sveselov          #+#    #+#             */
/*   Updated: 2023/02/19 22:15:32 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int **create_grid(int size)
{	
    int** grid = (int**)malloc(size * sizeof(int*));
    int i = 0;
    while (i < size) {
        grid[i] = (int*)malloc(size * sizeof(int));
        int j = 0;
        while (j < size) {
            grid[i][j] = 0;
            j++;
        }
        i++;
    }
    return (grid);
}
