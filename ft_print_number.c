/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:57:52 by gabastos          #+#    #+#             */
/*   Updated: 2024/11/07 15:24:30 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int number)
{
	int		count;
	long	num;

	count = 0;
	num = number;
	if (num < 0)
	{
		num = -num;
		count += ft_print_char('-');
	}
	if (num >= 10)
		count += ft_print_number(num / 10);
	count += ft_print_char((num % 10) + '0');
	return (count);
}
