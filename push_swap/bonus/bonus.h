/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:38:56 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/11 14:40:43 by umartin-         ###   ########.fr       */
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
void	imprimir(char **sta, char **stb);
void	chk_addnumbers(t_list **stemp, char **av, int i);
int		chk_checker(int ac, char **av);
int		chk_atoi_psw(const char *str);
int		chk_com_num_checker(char *str);
int		chk_num_checker(char *str);
int		chk_alr_ord(t_list	**sta);

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

#endif