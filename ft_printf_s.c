/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:38:25 by satabay           #+#    #+#             */
/*   Updated: 2025/07/18 12:16:24 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *c)
{
	int	count;

	if (c == NULL)
		return (ft_printf_s("(null)"));
	count = 0;
	while (*c)
	{
		ft_printf_c(*c);
		c++;
		count++;
	}
	return (count);
}
