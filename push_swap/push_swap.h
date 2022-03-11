/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:43:23 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/11 15:52:04 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

int		main(int ac, char **av);
void	errormsg(void);
int		ft_atoi_psw(const char *str);
void	addnumbers(t_list **sta, char **av, int i);

// Movements

void	psw_sa(t_list **sta);
void	psw_sb(t_list **stb);
void	psw_ss(t_list **sta, t_list **stb);
void	psw_ra(t_list **sta);
void	psw_rb(t_list **sta);
void	psw_rr(t_list **sta, t_list **stb);
void	psw_rra(t_list **sta);
void	psw_rrb(t_list **sta);
void	psw_ss(t_list **sta, t_list **stb);
void	psw_pa(t_list **sta, t_list **stb);
void	psw_pb(t_list **sta, t_list **stb);
void	doble_pa(t_list **sta, t_list **stb);

// Checker

int		rep_nums(t_list	**sta);
int		alr_ord(t_list	**sta);
int		num_checker(char *str);
int		com_num_checker(char *str);
int		checker(int ac, char **av);

// Algorithm
void	case_3(t_list	**sta);
void	arg_num_chkr(t_list **sta, t_list **stb);
void	case_3_1(t_list	**sta);
void	case_3_2(t_list	**sta);
void	case_5(t_list **sta, t_list **stb);
void	case_5_1(t_list **sta, t_list **stb);
void	case_5_2(t_list **sta, t_list **stb, int t);
void	case_5_3(t_list **sta, t_list **stb, int t);
int		min_pos_finder(t_list **sta, t_list **stb, int t, int cc);
void	all_b_to_a(t_list **sta, t_list **stb);
void	case_standard(t_list **sta, t_list **stb);

void	imprimir(char **sta, char **stb);

#endif