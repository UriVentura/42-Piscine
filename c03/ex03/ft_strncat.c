/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:20:30 by oventura          #+#    #+#             */
/*   Updated: 2021/04/25 12:00:30 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat (char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (dest[i] != 0)
	{
		while (dest[i] != 0)
			i++;
	}
	while (src[j] != 0 && j < nb)
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
