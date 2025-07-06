/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:38:25 by satabay           #+#    #+#             */
/*   Updated: 2025/07/06 20:38:47 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *c)
{
	int	count;

	count = 0;
	while (*c)
	{
		ft_printf_c(*c);
		c++;
		count++;
	}
	return (count);
}
