/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <rmouhoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:19:32 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/12/03 19:59:42 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEXA_DECIM "0123456789abcdef0123456789ABCDEF"

int	ft_print_d_or_i(va_list list, int base, int up_do, int *counter);
int	ft_parse(const char c, va_list list);
int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putnbr(unsigned long nb, unsigned int base, int up_do, int *counter);
int	ft_putstr(char *c);

#endif