/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unumber.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:12:19 by gabastos          #+#    #+#             */
/*   Updated: 2024/11/07 16:20:36 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unumber(unsigned int number)
{
	int		count;
	long	num;

	count = 0;
	num = number;
	if (num >= 10)
		count += ft_print_unumber(num / 10);
	count += ft_print_char((num % 10) + '0');
	return (count);
}
