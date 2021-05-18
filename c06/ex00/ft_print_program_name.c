/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:43:43 by oventura          #+#    #+#             */
/*   Updated: 2021/04/29 16:58:06 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	main (int argc, char *argv[])
{
	char	*res;
	int		i;

	i = 0;
	res = *argv;
	while (*(res + i) != '\0')
	{
		write(1, res + i, 1);
		i++;
	}
	write (1, "\n", 1);
	return (argc);
}
