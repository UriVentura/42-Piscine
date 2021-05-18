/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_verif.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajout <yamajout@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:57:55 by yamajout          #+#    #+#             */
/*   Updated: 2021/04/25 19:19:24 by yamajout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	ft_input_read (int dir_dicc, char *argv_str);
int	ft_error (int for_why);

int	ft_input_verif (int argc, char **argv)	//from main
{
	int		dir_dicc;
	char	*dir_dicc_default;

	dir_dicc_default = "numbers.dic";
	if (argc == 3 || argc != 2)	//caso argumento y dic
	{
		dir_dicc = open (argv[1], O_RDONLY);
		if (dir_dicc < 0 || (argc != 2 && argc != 3)) //si open<0 error o si hay mas argumentos o menos
		{
			return (ft_error (1));
		}
		else
			ft_input_read (dir_dicc, argv[2]); //lee y almacena el diccionario
	}
	else if (argc == 2) //caso sin argumento entrada
	{
		dir_dicc = open (dir_dicc_default, O_RDONLY); //.dic por defecto
		ft_input_read (dir_dicc, argv[1]); //string unsigned int on char
	}
	return (1);
}

//	4,294,967,295

/*

verifica si la entrada incluye 
un diccionario y si se ha abierto
correctamente

si argc == 3 hay dicionario + unsigned int
	se envia a ft_read el valor de unsigned int en argv[3]

si argc == 2 no hay diccionario y se envia el 
valor de unsigned int en argv[2] y el retorno de open()


*/