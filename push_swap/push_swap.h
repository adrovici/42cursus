/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:43:23 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/12 16:03:09 by umartin-         ###   ########.fr       */
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
void	addnumbers(t_list **stemp, char **av, int i, int b);

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
	int		stack8;
	int		stack9;
	int		stack10;
	int		stack11;
	int		stack12;
	int		stack13;
	int		stack14;
	int		stack15;
	int		a;
	int		c;
	int		rrr_min;
	int		rrr_size;
	int		ord_cu;
	int		ord_aux;

}	t_push;

// Movements

void	psw_sa(t_list **sta, t_list **result);
void	psw_sb(t_list **stb, t_list **result);
void	psw_ra(t_list **sta, t_list **result);
void	psw_rb(t_list **sta, t_list **result);
void	psw_rra(t_list **sta, t_list **result);
void	psw_rrb(t_list **sta, t_list **result);
void	psw_rrr(t_list **sta, t_list **stb, t_list **result);
void	psw_pa(t_list **sta, t_list **stb, t_list **result);
void	psw_pb(t_list **sta, t_list **stb, t_list **result);
void	doble_pa(t_list **sta, t_list **stb, t_list **result);

// Checker

int		rep_nums(t_list	**sta);
int		alr_ord(t_list	**sta);
int		num_checker(char *str);
int		com_num_checker(char *str);
int		checker(int ac, char **av);
int		at_least_one_num(char *str);

// Algorithm
void	case_3(t_list **sta, t_list **result);
void	arg_num_chkr(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	case_3_1(t_list	**sta, t_list **result);
void	case_3_2(t_list	**sta, t_list **result);
void	case_5(t_list **sta, t_list **stb, t_list **result);
void	case_5_1(t_list **sta, t_list **stb, t_list **result);
void	case_5_2(t_list **sta, t_list **stb, int t, t_list **result);
void	case_5_3(t_list **sta, t_list **stb, int t, t_list **result);
void	main_utils(t_list **sta, t_list **stb, t_list **result, t_push *push);

int		min_num_finder(t_list	**sta);
int		max_num_finder(t_list	**sta);
int		min_pos_finder(t_list **sta, int t, int cc);

void	all_b_to_a(t_list **sta, t_list **stb, t_list **result);

void	case_standard(t_list **sta, t_list **stb, t_list **result);
void	utils_rra(t_list **sta, t_list **stb, int t, t_list **result);
void	utils_ra(t_list **sta, t_list **stb, int t, t_list **result);

void	algorithm_of_the_mandangon(t_list **sta, t_list **stb, t_list **result);
int		next_min_num(t_list	**sta, int min);
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

void	result_printer(t_list **res);
void	real_printer(t_list **res);

void	t_c_o(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	stack2_split(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	stk2_split_2(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	stack4_split(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	split_helper(t_list **sta, t_list **stb, t_list **result, int a);
int		cla_mid_finder(t_list	**sta, int a);
void	list_stack_init(t_list **sta, t_push *push, int aux);
int		a_to_b_spl(t_list **sta, t_list **stb, t_list **result, t_push *push);
int		a_b_spl_t(t_list **sta, t_list **stb, t_list **result, t_push *push);
int		a_b_spl_4(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	rrr_adv(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	a_to_b_spl_8(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	b_to_a_orden(t_list **sta, t_list **stb, t_list **result, t_push *push);
int		b_to_a_ord_ut(t_list **sta, t_list **stb, t_list **result, int aux);
void	b_to_a_ord_2(t_list **stb, t_list **result, t_push *push);
void	ra_printer(t_list **sta, t_list **result, int aux);
void	a_to_b_ord(t_list **sta, t_list **stb, t_list **result, int a);
int		until_next_stack(t_list **sta, t_push *push);
int		until_next_stack_2(t_list **sta, t_push *push);
int		until_next_two_stacks_68(t_list **sta, t_push *push);
int		until_next_two_stacks_24(t_list **sta, t_push *push);
int		until_next_four_stacks(t_list **sta, t_push *push);
void	script1(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	script2(t_list **sta, t_list **stb, t_list **result, t_push *push);

void	t_c_o_500(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	list_16stack_init(t_list **sta, t_push *push, int aux);
void	a_b_spl_16(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	stack8_split(t_list **sta, t_list **stb, t_list **result, t_push *push);
int		u_n_four_stck_500(t_list **sta, t_push *push);
int		u_n_two_stck_500(t_list **sta, t_push *push);
int		u_n_stck_500(t_list **sta, t_push *push);
int		a_to_b_sp_82(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	stck4_2_spl(t_list **sta, t_list **stb, t_list **result, t_push *push);
void	list_init_utils(t_list **sta, t_push *push, int aux, int i);
void	free_lists(t_list *sta, t_list *result, t_list *stemp);
void	list_free(t_list *st);

int		cla_next_finder(t_list	**sta, int a);
int		min_num_finder_algo(t_list	**sta, int a);
int		next_min_num_algo(t_list	**sta, int min, int a);
int		max_num_finder_algo(t_list	**sta, int a);
int		nums_until_min(t_list	**sta, int a);
void	list_init(t_list **stemp, t_list **sta);
void	the_game_changer(t_push *push);

void	no_op_printer(t_list **res);

#endif