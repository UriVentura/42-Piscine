/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:01:53 by oventura          #+#    #+#             */
/*   Updated: 2021/04/11 21:02:02 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
void	ft_printer(int x, char starter, char middle, char ended);

void	rush(int x, int y)
{
	const char	top_left = 'A';
	const char	top_right = 'C';
	const char	bottom_left = 'C';
	const char	bottom_right = 'A';
	const char	border = 'B';

	if (x < 1 || y < 1)
	{
		return ;
	}
	else
	{
		ft_printer(x, top_left, border, top_right);
		y--;
		while (y > 1)
		{
			ft_printer(x, border, ' ', border);
			y--;
		}
		if (y == 1)
			ft_printer(x, bottom_left, border, bottom_right);
	}	
}

void	ft_printer(int x, char starter, char middle, char ended)
{
	ft_putchar(starter);
	while ((x - 1) > 1)
	{
		ft_putchar(middle);
		x--;
	}
	if (x > 1)
		ft_putchar(ended);
	ft_putchar('\n');
}
