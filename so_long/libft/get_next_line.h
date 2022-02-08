/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:19:34 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/07 13:57:55 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*ft_read_static_gnl(int fd, char *final);
char	*ft_final_rtn(char *final);
char	*ft_clean_final(char *final);
char	*ft_strjoin_gnl(char *final, char *rd);
char	*ft_strchr_gnl(char *str, int c);

size_t	ft_strlen_gnl(char *str);

#endif