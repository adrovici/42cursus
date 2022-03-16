/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:43:23 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/16 18:09:48 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

// typedef struct s_general
// {
// 	int	size;

// }	t_general;

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
void	inverse_case_3(t_list	**sta);
void	inverse_case_3_1(t_list	**sta);
void	inverse_case_3_2(t_list	**sta);
void	arg_num_chkr(t_list **sta, t_list **stb);
void	case_3_1(t_list	**sta);
void	case_3_2(t_list	**sta);
void	case_5(t_list **sta, t_list **stb);
void	case_5_1(t_list **sta, t_list **stb);
void	case_5_2(t_list **sta, t_list **stb, int t);
void	case_5_3(t_list **sta, t_list **stb, int t);
int		min_num_finder(t_list	**sta);
int		max_num_finder(t_list	**sta);
int		min_pos_finder(t_list **sta, t_list **stb, int t, int cc);
void	all_b_to_a(t_list **sta, t_list **stb);
void	case_standard(t_list **sta, t_list **stb);
void	case_standard_utils_ra(t_list **sta, t_list **stb, int t, int c);
void	case_standard_utils_rra(t_list **sta, t_list **stb, int t, int c);
void	algorithm_of_the_mandangon(t_list **sta, t_list **stb);
int		next_min_num(t_list	**sta, int min);
int		cla_finder(t_list	**sta);
int		current_finder(t_list **sta, int cla);
int		current_finder_2(t_list **sta, int current, int counter);
int		current_finder_3(t_list **sta, int current, int cla);
int		current_finder_2_2(t_list **sta, int current, int counter);
int		current_finder_2_3(t_list **sta, int current, int counter2);
void	mandangon_init(t_list **sta, t_list **stb);
int		current_checker(t_list **sta, int cla);
int		r_or_rr(t_list **sta, int current);
int		r_or_rr_b(t_list **stb, int current);

void	case_b(t_list **sta, t_list **stb, int current);
void	rrb_solver(t_list **stb, int i);
void	rb_solver(t_list **stb, int i);
int		case_b_is_possible(t_list **stb, int current);
void	is_minim(t_list **sta, t_list **stb);

void	i_case_3(t_list	**stb);
void	i_case_3_1(t_list	**stb);
void	i_case_3_2(t_list	**stb);

void	imprimir(char **sta, char **stb);

#endif