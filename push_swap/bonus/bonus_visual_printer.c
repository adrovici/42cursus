/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_visual_printer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:24:07 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/12 11:38:29 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	imprimir(t_list **sta, t_list **stb)
{
	t_list	*tempa;
	t_list	*tempb;

	tempa = *sta;
	tempb = *stb;
	visual_printer_1();
	while (tempa)
	{
		printf("%i ", tempa->content);
		tempa = tempa->next;
	}
	visual_printer_2();
	while (tempb)
	{
		printf("%i ", tempb->content);
		tempb = tempb->next;
	}
	visual_printer_3();
}

void	chk_errormsg(void)
{
	ft_printf("Error\n");
	exit (0);
}

void	visual_printer_1(void)
{
	printf("\n");
	printf("\033[0;31m");
	printf ("/////////////////////////////\n");
	printf("\033[0;36m");
	printf ("STACK A\n");
	printf("\033[0;37m");
}

void	visual_printer_2(void)
{
	printf("\n");
	printf("\033[0;34m");
	printf ("_____________________________\n");
	printf("\n");
	printf("\033[0;36m");
	printf ("STACK B\n");
	printf("\033[0;37m");
}

void	visual_printer_3(void)
{
	printf("\n");
	printf("\033[0;31m");
	printf ("/////////////////////////////\n");
	printf("\033[0;37m");
	printf("\n");
}
