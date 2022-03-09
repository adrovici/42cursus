/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:43:23 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/09 20:28:38 by umartin-         ###   ########.fr       */
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

// Checker

int		rep_nums(t_list	**sta);
int		alr_ord(t_list	**sta);
int		num_checker(char *str);
int		com_num_checker(char *str);
int		checker(int ac, char **av);


#endif