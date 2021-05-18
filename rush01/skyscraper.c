/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:25:53 by oventura          #+#    #+#             */
/*   Updated: 2021/04/17 18:25:57 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int    c_matrix(int value, int row, int column)
{
    int matrix;
    int i;
    int j;

    matrix = (int)malloc(row * sizeof(int));
    i = 0;
    while (i < row)
    {
        matrix[i] = (int)malloc(column * sizeof(int));
        j = 0;
        while (j < 4)
        {
            matrix[i][j] = value;
            j++;
        }
        i++;
    }
    return matrix;
}

void    ft_malloc_matrix(int *matrix)
{
    matrix[0] = c_matrix(0, 4, 4);
    matrix[1] = c_matrix(0, 4, 4);
    matrix[2] = c_matrix(0, 4, 4);
    matrix[3] = c_matrix(0, 4, 4);
}


void    ft_logic_start(char values)
{
    
}
