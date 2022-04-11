/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:42:27 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/11 15:19:23 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	main(int argc, char **argv)
{
	t_list	*sta;
	t_list	*stb;
	char	*line;

	sta = NULL;
	stb = NULL;
	line = NULL;
	if (argc < 2)
		return (0);
	if (chk_checker(argc, argv))
		chk_errormsg();
	else
	{
		if (argc > 2)
			chk_addnumbers(&sta, argv, 0);
		else
			chk_addnumbers(&sta, ft_split(argv[1], ' '), -1);
	}
	system ("clear\n");
	imprimir (&sta, &stb);
	while (1)
	{
		line = get_next_line(0);
		if (line == NULL)
			break ;
		if (!strcmp(line, "pb\n"))
			chk_pb(&sta, &stb);
		else if (!strcmp(line, "pa\n"))
			chk_pa(&sta, &stb);
		else if (!strcmp(line, "rb\n"))
			chk_rb(&stb);
		else if (!strcmp(line, "ra\n"))
			chk_ra(&sta);
		else if (!strcmp(line, "rr\n"))
			chk_rr(&sta, &stb);
		else if (!strcmp(line, "rrb\n"))
			chk_rrb(&stb);
		else if (!strcmp(line, "rra\n"))
			chk_rra(&sta);
		else if (!strcmp(line, "rrr\n"))
			chk_rrr(&sta, &stb);
		else if (!strcmp(line, "sb\n"))
			chk_sb(&stb);
		else if (!strcmp(line, "sa\n"))
			chk_sa(&sta);
		system ("clear\n");
		imprimir (&sta, &stb);
	}
	if ((chk_alr_ord(&sta)) && (ft_lstsize(stb) == 0))
		printf ("OK\n");
	else
		printf ("KO\n");
	exit (0);
}

void	imprimir(char **sta, char **stb)
{
	t_list	*tempa;
	t_list	*tempb;

	tempa = *sta;
	tempb = *stb;
	printf("\n");
	printf("\033[0;31m");
	printf ("/////////////////////////////\n");
	printf("\033[0;36m");
	printf ("STACK A\n");
	printf("\033[0;37m");
	while (tempa)
	{
		printf("%i ", tempa->content);
		tempa = tempa->next;
	}
	printf("\n");
	printf("\033[0;34m");
	printf ("_____________________________\n");
	printf("\n");
	printf("\033[0;36m");
	printf ("STACK B\n");
	printf("\033[0;37m");
	while (tempb)
	{
		printf("%i ", tempb->content);
		tempb = tempb->next;
	}
	printf("\n");
	printf("\033[0;31m");
	printf ("/////////////////////////////\n");
	printf("\033[0;37m");
	printf("\n");
}

void	chk_errormsg(void)
{
	ft_printf("Error\n");
	exit (0);
}

void	chk_addnumbers(t_list **stemp, char **av, int i)
{
	int	number;

	while (av[++i] != NULL)
	{
		number = chk_atoi_psw(av[i]);
		ft_lstadd_back(stemp, ft_lstnew(number));
	}
}

int	chk_checker(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		if (chk_com_num_checker(av[1]))
			return (1);
		else
			return (0);
	}
	else
	{
		while (av[++i] != NULL)
		{
			if (chk_num_checker(av[i]))
				return (1);
		}
	}
	return (0);
}

int	chk_atoi_psw(const char *str)
{
	int			c;
	int			s;
	long int	res;

	c = 0;
	s = 1;
	res = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		if (res * s < -2147483648)
			chk_errormsg();
		if (res * s > 2147483647)
			chk_errormsg();
		c++;
	}
	return (res * s);
}

int	chk_com_num_checker(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (((str[i] != '-') && (str[i] != '+') && (str[i] != ' '))
			&& ((str[i] < '0') || (str[i] > '9')))
			return (1);
		if ((str[i] == '-') || (str[i] == '+'))
		{
			if (i == 0)
			{
				if ((str[i + 1] < '0') || (str[i + 1] > '9'))
					return (1);
			}
			else
			{
				if (((str[i + 1] < '0') || (str[i + 1] > '9'))
					|| (str[i - 1] != ' '))
					return (1);
			}
		}
	}
	return (0);
}

int	chk_num_checker(char *str)
{
	int	i;

	if (str[0] == '-' || str[0] == '+')
	{
		if (ft_strlen(str) == 1)
			return (1);
		i = 1;
		while (str[i] != '\0')
		{
			if (str[i] < '0' || str[i] > '9')
				return (1);
			i++;
		}
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	chk_alr_ord(t_list	**sta)
{
	t_list	*temp1;
	t_list	*temp2;

	if (*sta == NULL)
		return (0);
	temp1 = *sta;
	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		while (temp2 != NULL)
		{
			if ((int)temp2->content < (int)temp1->content)
				return (0);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return (1);
}
