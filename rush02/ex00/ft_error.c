/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajout <yamajout@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 19:11:28 by yamajout          #+#    #+#             */
/*   Updated: 2021/04/25 18:56:34 by yamajout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_error (int for_why)
{
	if (for_why == 1)
		write (1, "Error\n", 7);
		
	if (for_why == 2)
		write (1, "Dict Error\n", 12);

	return (0);
}
