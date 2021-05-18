/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 19:30:48 by oventura          #+#    #+#             */
/*   Updated: 2021/04/21 17:07:59 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != 0)
	{
		i++;
	}
	if (size != 0)
	{
		while ((src[j] != 0) && (j < size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = 0;
	}
	return (i);
}
