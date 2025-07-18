/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:38:57 by satabay           #+#    #+#             */
/*   Updated: 2025/07/18 11:22:47 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int num)
{
	char		c;
	int			count;

	count = 0;
	if (num > 9)
	{
		count += ft_printf_d(num / 10);
		c = (num % 10) + '0';
		count += write(1, &c, 1);
	}
	if (num < 10)
	{
		c = (num + '0');
		count += write(1, &c, 1);
	}
	return (count);
}
