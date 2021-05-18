/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:36:39 by oventura          #+#    #+#             */
/*   Updated: 2021/04/29 10:19:41 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	sp_num;

	if (nb < 0)
	{
		sp_num = -nb;
		write(1, "-", 1);
	}
	else
		sp_num = nb;
	if (sp_num >= 10)
	{
		ft_putnbr(sp_num / 10);
		ft_putnbr(sp_num % 10);
	}
	else
	{
		ft_putchar(sp_num + '0');
	}
}
