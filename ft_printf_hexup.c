/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:14:55 by satabay           #+#    #+#             */
/*   Updated: 2025/07/06 20:37:51 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexup(unsigned int num)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (num >= 16)
		count += ft_printf_hexup(num / 16);
	count += write(1, &base[num % 16], 1);
	return (count);
}
