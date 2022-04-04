/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:43:23 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/04 18:14:28 by umartin-         ###   ########.fr       */
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

typedef struct s_push
{
	int		max;
	int		min;
	int		stack1;
	int		stack2;
	int		stack3;
	int		stack4;
	int		stack5;
	int		stack6;
	int		stack7;

}	t_push;

// Movements

void	psw_sa(t_list **sta, t_list **result);
void	psw_sb(t_list **stb, t_list **result);
void	psw_ra(t_list **sta, t_list **result);
void	psw_rb(t_list **sta, t_list **result);
void	psw_rra(t_list **sta, t_list **result);
void	psw_rrb(t_list **sta, t_list **result);
void	psw_pa(t_list **sta, t_list **stb, t_list **result);
void	psw_pb(t_list **sta, t_list **stb, t_list **result);
void	doble_pa(t_list **sta, t_list **stb, t_list **result);

// Checker

int		rep_nums(t_list	**sta);
int		alr_ord(t_list	**sta);
int		num_checker(char *str);
int		com_num_checker(char *str);
int		checker(int ac, char **av);

// Algorithm
void	case_3(t_list **sta, t_list **result);
void	arg_num_chkr(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	case_3_1(t_list	**sta, t_list **result);
void	case_3_2(t_list	**sta, t_list **result);
void	case_5(t_list **sta, t_list **stb, t_list **result);
void	case_5_1(t_list **sta, t_list **stb, t_list **result);
void	case_5_2(t_list **sta, t_list **stb, int t, t_list **result);
void	case_5_3(t_list **sta, t_list **stb, int t, t_list **result);

int		min_num_finder(t_list	**sta);
int		max_num_finder(t_list	**sta);
int		min_pos_finder(t_list **sta, t_list **stb, int t, int cc);

void	all_b_to_a(t_list **sta, t_list **stb, t_list **result);

void	case_standard(t_list **sta, t_list **stb, t_list **result);
void	case_standard_utils_ra(t_list **sta, t_list **stb, int t, int c, t_list **result);
void	case_standard_utils_rra(t_list **sta, t_list **stb, int t, int c, t_list **result);

void	algorithm_of_the_mandangon(t_list **sta, t_list **stb, t_list **result);
int		next_min_num(t_list	**sta, int min);
int		previous_finder(t_list **stb, int min);
int		cla_finder(t_list	**sta, int a);
int		current_finder(t_list **sta, int cla);
int		current_finder_2(t_list **sta, int current, int counter);
int		current_finder_3(t_list **sta, int current, int cla);
int		current_finder_2_2(t_list **sta, int current, int counter);
int		current_finder_2_3(t_list **sta, int current, int counter2);
void	mandangon_init(t_list **sta, t_list **stb);
int		current_checker(t_list **sta, int cla);

int		r_or_rr(t_list **sta, int current);
int		r_or_rr_b(t_list **stb, int current);

void	case_b(t_list **sta, t_list **stb, int current, t_list **result);
void	rrb_solver(t_list **stb, int i, t_list **result);
void	rb_solver(t_list **stb, int i, t_list **result);
int		case_b_is_possible(t_list **stb, int current);
int		case_b_is_possible_m(t_list **stb, int current);
void	is_minim(t_list **sta, t_list **stb, t_list **result);

void	i_case_3(t_list	**stb, t_list **result);
void	i_case_3_1(t_list	**stb, t_list **result);
void	i_case_3_2(t_list	**stb, t_list **result);

void	result_printer(t_list **res);
void	real_printer(t_list **res);

void	the_chosen_one(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	stack2_split(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	stack2_split_2(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	stack4_split(t_list **sta, t_list **stb, t_list **result, t_push *push);
int		cla_mid_finder(t_list	**sta, int a);
void	list_stack_init(t_list **sta, t_push *push, int aux);
int		b_to_a_splitter(t_list **sta, t_list **stb, t_list **result, int aux_aux);
void	a_to_b_splitter(t_list **sta, t_list **stb, t_list **result, t_push *push, int a);
void	a_to_b_splitter_4(t_list **sta, t_list **stb, t_list **result, t_push *push, int a);
void	a_to_b_spl_8(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	b_to_a_orden(t_list **sta, t_list **stb, t_list **result);
void	a_to_b_to_ord(t_list **sta, t_list **stb, t_list **result, int a);
int		until_next_stack(t_list **sta, t_push *push);
int		until_next_two_stacks(t_list **sta, t_push *push);
int		until_next_four_stacks(t_list **sta, t_push *push);

int		cla_next_finder(t_list	**sta, int a);
int		min_num_finder_algo(t_list	**sta, int a);
int		next_min_num_algo(t_list	**sta, int min, int a);
int		max_num_finder_algo(t_list	**sta, int a);
int		nums_until_min(t_list	**sta, int a);
void	list_init(t_list **stemp, t_list **sta);

void	imprimir(char **sta, char **stb);
void	no_op_printer(t_list **res);

#endif