/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:33:32 by satabay           #+#    #+#             */
/*   Updated: 2025/07/18 11:20:44 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(int num)
{
	long int	a;
	char		c;
	int			count;

	count = 0;
	a = (long int)num;
	if (num < 0)
	{
		count += write(1, "-", 1);
		a = a * -1;
	}
	if (a > 9)
	{
		count += ft_printf_d(a / 10);
		c = (a % 10) + '0';
		count += write(1, &c, 1);
	}
	if (a < 10)
	{
		c = (a + '0');
		count += write(1, &c, 1);
	}
	return (count);
}
