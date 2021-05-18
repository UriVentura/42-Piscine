/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:40:12 by oventura          #+#    #+#             */
/*   Updated: 2021/04/22 16:37:16 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	while (*str != 0)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = (*str + 32);
		}
		str++;
	}
}

void	capitalize(char *str)
{
	char	*i;

	i = 0;
	while (*str != 0)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9'))
		{
			if (i == 0)
				i = str;
		}
		else
		{
			if (i != 0 && (*i >= 'a' && *i <= 'z'))
				*i = *i - 32;
			i = 0;
		}
		str++;
	}
	if (i != 0 && (*i >= 'a' && *i <= 'z'))
		*i = *i - 32;
}

char	*ft_strcapitalize(char *str)
{
	ft_strlowcase(str);
	capitalize(str);
	return (str);
}
