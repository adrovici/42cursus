/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:49:52 by umartin-          #+#    #+#             */
/*   Updated: 2021/12/01 12:46:37 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_type(char t, va_list args, int *num);
void	ft_putchar_c(char c, int *num);
void	ft_putstr_s(char *str, int *num);
void	ft_putnbr_di(int nb, int *num);
void	ft_putnbr_u(unsigned int nb, int *num);
void	ft_puthexa_x(unsigned long int n, int *num);
void	ft_puthexa_xx(unsigned long int n, int *num);

int		ft_printf(const char *str, ...);

#endif