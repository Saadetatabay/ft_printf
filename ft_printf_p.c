/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:34:14 by satabay           #+#    #+#             */
/*   Updated: 2025/07/18 11:47:09 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex(unsigned long ptr)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (ptr >= 16)
	{
		count += ft_putnbr_hex(ptr / 16);
	}
	count += write(1, &base[ptr % 16], 1);
	return (count);
}

int	ft_printf_p(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		count = write(1, "(nil)", 5);
		return (count);
	}
	count += write(1, "0x", 2);
	count += ft_putnbr_hex((unsigned long)ptr);
	return (count);
}
