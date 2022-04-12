/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:38:56 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/12 17:04:40 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include "../libft/libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>

int		main(int argc, char **argv);
void	chk_errormsg(void);
void	imprimir(t_list **sta, t_list **stb);
void	chk_addnumbers(t_list **stemp, char **av, int i, int b);
int		chk_checker(int ac, char **av);
int		chk_atoi_psw(const char *str);
int		chk_com_num_checker(char *str);
int		chk_num_checker(char *str);
int		chk_alr_ord(t_list	**sta);
void	main_utils(char	*line, t_list **sta, t_list **stb);
void	main_utils_2(char	*line, t_list **sta, t_list **stb);
int		chk_rep_nums(t_list	**sta);
void	chk_free_lists(t_list *sta, t_list *stb);
void	chk_list_free(t_list *st);
int		chk_at_least_one_num(char *str);

// MOVES
void	chk_pb(t_list **sta, t_list **stb);
void	chk_pa(t_list **sta, t_list **stb);
void	chk_sa(t_list **sta);
void	chk_sb(t_list **stb);
void	chk_ra(t_list **sta);
void	chk_rb(t_list **sta);
void	chk_rrb(t_list **sta);
void	chk_rra(t_list **sta);
void	chk_rrr(t_list **sta, t_list **stb);
void	chk_rr(t_list **sta, t_list **stb);

// VISUAL PRINTER
void	visual_printer_1(void);
void	visual_printer_2(void);
void	visual_printer_3(void);

#endif