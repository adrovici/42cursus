/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:43:23 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/08 15:08:43 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

int		main(int ac, char **av);
int		num_checker(char *str);
int		com_num_checker(char *str);
int		checker(int ac, char **av);
void	errormsg(void);
int		ft_atoi_psw(const char *str);
void	addnumbers(t_list **sta, char **av, int i);
void	psw_sa(t_list **sta);
void	psw_sb(t_list **stb);
void	psw_ss(t_list **sta, t_list **stb);

#endif