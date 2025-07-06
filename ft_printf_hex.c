/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:45:09 by satabay           #+#    #+#             */
/*   Updated: 2025/07/06 20:04:03 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned int num)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (num >= 16)
		count += ft_printf_hex(num / 16);
	count += write(1, &base[num % 16], 1);
	return (count);
}
