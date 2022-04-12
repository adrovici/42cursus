/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:42:27 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/12 17:07:23 by umartin-         ###   ########.fr       */
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
			chk_addnumbers(&sta, argv, 0, 0);
		else
			chk_addnumbers(&sta, ft_split(argv[1], ' '), -1, 1);
	}
	main_utils_2(line, &sta, &stb);
	if ((chk_alr_ord(&sta)) && (ft_lstsize(stb) == 0))
		printf ("OK\n");
	else
		printf ("KO\n");
	chk_free_lists(sta, stb);
	exit (0);
}

void	main_utils_2(char	*line, t_list **sta, t_list **stb)
{
	if (chk_rep_nums(sta))
		chk_errormsg();
	system ("clear\n");
	imprimir (sta, stb);
	while (1)
	{
		line = get_next_line(0);
		if (line == NULL)
			break ;
		main_utils(line, sta, stb);
		free (line);
	}
}

void	main_utils(char	*line, t_list **sta, t_list **stb)
{
	if (!strcmp(line, "pb\n"))
		chk_pb(sta, stb);
	else if (!strcmp(line, "pa\n"))
		chk_pa(sta, stb);
	else if (!strcmp(line, "rb\n"))
		chk_rb(stb);
	else if (!strcmp(line, "ra\n"))
		chk_ra(sta);
	else if (!strcmp(line, "rr\n"))
		chk_rr(sta, stb);
	else if (!strcmp(line, "rrb\n"))
		chk_rrb(stb);
	else if (!strcmp(line, "rra\n"))
		chk_rra(sta);
	else if (!strcmp(line, "rrr\n"))
		chk_rrr(sta, stb);
	else if (!strcmp(line, "sb\n"))
		chk_sb(stb);
	else if (!strcmp(line, "sa\n"))
		chk_sa(sta);
	system ("clear\n");
	imprimir (sta, stb);
}

void	chk_addnumbers(t_list **stemp, char **av, int i, int b)
{
	int	number;

	while (av[++i] != NULL)
	{
		number = chk_atoi_psw(av[i]);
		ft_lstadd_back(stemp, ft_lstnew(number));
		if (b)
			free (av[i]);
	}
	if (b)
		free (av);
}

int	chk_checker(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		if (chk_at_least_one_num(av[1]) == 1)
		{
			if (chk_com_num_checker(av[1]))
				return (1);
			else
				return (0);
		}
		else
			exit (0);
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
