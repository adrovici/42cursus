/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:54:15 by umartin-          #+#    #+#             */
/*   Updated: 2021/11/22 16:58:09 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		num;

	i = 0;
	num = 0;
	va_start (args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			ft_va(str[i + 1], args);
			i += 2;
			continue ;
		}
		ft_putchar_c(str[i]);
		i++;
	}
	va_end (args);
}
