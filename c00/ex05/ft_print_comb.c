/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 11:54:42 by oventura          #+#    #+#             */
/*   Updated: 2021/04/14 17:14:55 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar (int i, int j, int k)
{
	char	a;
	char	b;
	char	c;

	a = i + '0';
	b = j + '0';
	c = k + '0';
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (i != 7 || j != 8 || k != 9)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb (void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i <= 7 )
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putchar(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
