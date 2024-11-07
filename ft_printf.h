/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:05:25 by gabastos          #+#    #+#             */
/*   Updated: 2024/11/07 16:19:48 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	check_type(const char	*user_output, va_list arg);
int	ft_printf(const char *format, ...);
int	ft_putupperhex(unsigned long num);
int	ft_puthex(unsigned long num);
int	ft_print_char(char c);
int	ft_print_string(char *str);
int	ft_print_number(int number);
int	ft_print_unumber(unsigned int number);
int	ft_print_ptr(unsigned long ptr);

#endif