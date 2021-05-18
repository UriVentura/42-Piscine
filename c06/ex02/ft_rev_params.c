/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:21:43 by oventura          #+#    #+#             */
/*   Updated: 2021/04/29 16:10:41 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	res;
	int	i;

	res = argc - 1;
	while (res >= 1)
	{
		i = 0;
		while (argv[res][i] != '\0')
		{
			write(1, &argv[res][i], 1);
			i++;
		}
		write(1, "\n", 1);
		res--;
	}
	return (argc);
}
