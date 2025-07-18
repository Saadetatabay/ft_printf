/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satabay <satabay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:21:32 by satabay           #+#    #+#             */
/*   Updated: 2025/07/18 12:23:33 by satabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_printf_s(char *c);
int	ft_printf_c(char c);
int	ft_printf_d(int num);
int	ft_printf_u(unsigned int num);
int	ft_printf_hex(unsigned int num);
int	ft_printf_hexup(unsigned int num);
int	ft_printf_p(void *ptr);
#endif