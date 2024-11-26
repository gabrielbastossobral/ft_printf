/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:21:22 by gabastos          #+#    #+#             */
/*   Updated: 2024/11/07 16:24:17 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	check_type(const char	*user_output, va_list arg)
{
	int	count;

	count = 0;
	if (*user_output == 'c')
		count += ft_print_char(va_arg(arg, int));
	else if (*user_output == 's')
		count += ft_print_string(va_arg(arg, char *));
	else if (*user_output == 'p')
		count += ft_print_ptr(va_arg(arg, unsigned long));
	else if (*user_output == 'd' || *user_output == 'i')
		count += ft_print_number(va_arg(arg, int));
	else if (*user_output == 'u')
		count += ft_print_unumber(va_arg(arg, unsigned int));
	else if (*user_output == 'x')
		count += ft_puthex(va_arg(arg, unsigned int));
	else if (*user_output == 'X')
		count += ft_putupperhex(va_arg(arg, unsigned int));
	else
		count += ft_print_char(*user_output);
	return (count);
}

int	ft_printf(const char *args, ...)
{
	va_list	type;
	int		count;

	count = 0;
	va_start(type, args);
	if (!args)
		return (-1);
	while (*args)
	{
		if (*args == '%')
		{
			args++;
			count += check_type(args, type);
		}
		else
			count += ft_print_char(*args);
		args++;
	}
	va_end(type);
	return (count);
}

// int main() {
//     char c = 'A';
//     char *s = "Hello, world!";
//     void *p = &c;
//     int d = -123;
//     int i = 42;
//     unsigned int u = 300000000;
//     unsigned int x = 255;
//     unsigned int X = 255;

//     ft_printf("Char: %c\n", c);
//     ft_printf("String: %s\n", s);
//     ft_printf("Pointer: %p\n", p);
//     ft_printf("Decimal: %d\n", d);
//     ft_printf("Integer: %i\n", i);
//     ft_printf("Unsigned: %u\n", u);
//     ft_printf("Hexadecimal (lowercase): %x\n", x);
//     ft_printf("Hexadecimal (uppercase): %X\n", X);
//     ft_printf("Percent: %%\n");

//     return 0;
// }
