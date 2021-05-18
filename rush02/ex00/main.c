/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajout <yamajout@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:13:38 by yamajout          #+#    #+#             */
/*   Updated: 2021/04/25 19:20:06 by yamajout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>	//for open()
#include <stdio.h>

int	ft_input_verif (int argc, char **argv);
int	ft_input_read (int dir_dicc, char *argv_str);
int	ft_error (int for_why);
int	ft_atoi (char *str);

int	main (int argc, char **argv)
{
	int z;

	z = ft_atoi ("2147483624");
	printf("%d", z);
	
	if (ft_input_verif (argc, argv) == 0)
		return (0);
	
}

//	4,294,967,295

/*

main principal, 
comenza verificando la integridad 
de los datos de entrada

*/
