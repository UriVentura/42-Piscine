/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:57:58 by oventura          #+#    #+#             */
/*   Updated: 2021/04/11 20:58:02 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
void	ft_printer(int x, char starter, char middle, char ended);

void	rush(int x, int y)
{
	const char	char_corner = 'o';
	const char	char_vertical = '|';
	const char	char_horizontal = '-';
	const char	char_content = ' ';

	if (x < 1 || y < 1)
	{
		return ;
	}
	else
	{
		ft_printer(x, char_corner, char_horizontal, char_corner);
		y--;
		while (y > 1)
		{
			ft_printer(x, char_vertical, char_content, char_vertical);
			y--;
		}
		if (y == 1)
			ft_printer(x, char_corner, char_horizontal, char_corner);
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
