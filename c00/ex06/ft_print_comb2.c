/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:50:10 by oventura          #+#    #+#             */
/*   Updated: 2021/04/14 17:17:01 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (int i, int j)
{
	char	a;
	char	b;

	a = (i / 10) + '0';
	b = (i % 10) + '0';
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	a = (j / 10) + '0';
	b = (j % 10) + '0';
	write (1, &a, 1);
	write (1, &b, 1);
	if (i != 98 || j != 99)
		write (1, ", ", 2);
}

void	ft_print_comb2 (void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i < j)
				ft_putchar (i, j);
			j++;
		}
		i++;
	}
}
