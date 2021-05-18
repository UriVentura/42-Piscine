/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_read.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajout <yamajout@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:14:29 by yamajout          #+#    #+#             */
/*   Updated: 2021/04/25 20:15:11 by yamajout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_dicc_first(char* num, int* pos);
int ft_input_number (char *argv_str);
int ft_error (int for_why);
int ft_size (int size);

int	ft_input_read (int dir_dicc, char *argv_str)	//from ft_input_verif
{
	char	buffer;
	char	**numb_save;
	char	**text_save;
	char	scape_chr;
	int		i;
	int		j;
	int		k;
	int		l;
	int		tot;
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	tot = 0;
	scape_chr = ' ';

	ft_input_number(argv_str);

	while (1)
	{
		read (dir_dicc, &buffer, 1);

		if (buffer < 48 || buffer > 57)
		{	
			close(dir_dicc);
			return (0);
		}
		while (buffer != ':')
		{
			if (buffer != ' ')
				numb_save[i][j] = buffer;
			read (dir_dicc, &buffer, 1);
			i++;
		}
		j++;


		while (buffer != '\n')
		{
			read (dir_dicc, &buffer, 1);
			if (buffer != scape_chr && buffer != ':')
			{
				text_save[k][l] = buffer;
				scape_chr = 0;
				k++;
			}
		}
		l++;
		tot++;
	}
	return (0);
}

int ft_input_number (char *argv_str)
{	
	int size;
	int i;
	long int* in_number;
	
	i = -1;
	size = 0;
	while (argv_str[++i] != 0)
	{
		if ( argv_str[i] > 48 || argv_str[i] < 57 )
			return (ft_error (1));
		if ( argv_str[i] > 48 && argv_str[i] > 57 )
			ft_dicc_first(&argv_str[i], &i);
		size++;
	}
	ft_size(size);
	return (0);
}



void ft_dicc_first(char* num, int* pos)
{
	int size;

	size = ft_size();
	
	



}

int ft_size(int size)
{
	return(size);
}







//	4,294,967,295

/*


manipula el text de entrada y lo pasa a int verficando errores;

dir_dicc es el retorno de open() 
como parametro de entrada de read()

*/

/*

ESTE CODIGO ES PARA HACER SPLIT DEL UNSIGNED INT 
Y ALMACENARLO EN ARRAY, SE COMPRUEBA CON LA TABLA ASCII,
SI ALGUN VALOR NO ES NUMERICO O INCLUYE ESPACIOS
SE MANDA FT_ERROR(1),
SI LA CANTIDAD DE ELEMENTOS SUPERA UNSIGNED INT 
SE MANDA FT_ERROR(1),
TAMBIENN HAY QUE VERIFICAR QUE 
NO SEA MAYOR DE 4294967295

void	ft_put_nbr (int nb)
{
	char	nb_store[12];
	long	size_c;
	int		size;
	int		i;
	long	conv;

	size_c = 1;
	size = 0;
	i = -1;
	nb = ft_print (nb);
	while ((nb % size_c) != nb)
	{
		size_c = size_c * 10;
		size++;
	}
	while (++i < size)
	{
		conv = nb % 10;
		nb_store[i] = (conv + '0');
		nb = nb / 10;
	}
	while (--i >= 0 )
	{
		write(1, &nb_store[i], 1);
	}
}

*/