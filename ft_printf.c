/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:39:26 by satabay           #+#    #+#             */
/*   Updated: 2025/07/18 10:34:54 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	specifier_type(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 's')
		count += ft_printf_s(va_arg(ap, char *));
	else if (c == 'c')
		count += ft_printf_c(va_arg(ap, int));
	else if (c == 'd' || c == 'i')
		count += ft_printf_d(va_arg(ap, int));
	else if (c == 'u')
		count += ft_printf_u(va_arg(ap, unsigned int));
	else if (c == 'x')
		count += ft_printf_hex(va_arg(ap, unsigned int));
	else if (c == 'X')
		count += ft_printf_hexup(va_arg(ap, unsigned int));
	else if (c == 'p')
		count += ft_printf_p(va_arg(ap, void *));
	else
		count += ft_printf_c('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	arptr;

	count = 0;
	va_start(arptr, format);
	while (*format)
	{
		if (*format == '%')
			count += specifier_type(*(++format), arptr);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(arptr);
	return (count);
}
