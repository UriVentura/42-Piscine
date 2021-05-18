/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajout <yamajout@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 10:07:09 by yamajout          #+#    #+#             */
/*   Updated: 2021/04/25 18:01:34 by yamajout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_verif(char *str);

int	ft_atoi (char* str)
{
	int i;
	int value;
	const char* min_int;

	min_int = "-2147483648";
	i = -1;
	value = 0;

	if (ft_atoi_verif(str) == 0)
		return (0);

	else if (ft_atoi_verif(str) == -2147483648)
		return (-2147483648);


	if (str == min_int) // verifica si estamos en el int min
	return (-2147483648);



	if (str[0] == '-' || str[0] == '+') // verifica si existe signo para el inicio
		i = 0;

	while (str[++i] != 0)
	{
printf("%d\n", value);

		if (i != 10)
			value = ( (value * 10) + (10 * (str[i] - '0' ) )  );
		else if (i == 10)
			value = ( value + (str[i] - '0' ) );

	}	

		if (i != 11)
			value = value / 10;

	if (str[0] == '-') // verifica si es negativo e invierte
		value = value * -1;

	return (value);
}





int	ft_atoi_verif(char *str)// retorna cantidad de array
{
	int i;

	i = -1;

	while (str[++i] != 0)
	{
		if ( (str[i] < 47 || str[i] > 57) && (str[0] != 45 && str[0] != 43) )
			return (0);
	}


	if (i > 11)
		return(0);
	else if ( (str[0] != '-' && str[0] != '+') && i > 10 ) // verifica si existe signo para el inicio
		return (0);
		
	return (--i);
}



/*

atoi
ascii to int
si el valor de entrada no son numeros o supera el 10 en (max de int)
retorna 0 es error
si el char a convertir es '0' entonces tambien es return (0)

si el signo es negativo hace el calculo en positivo int + -1
si el valor es el minimo en int-2147483648 lo retorna directamente
se verifica  el signo si existe

*/