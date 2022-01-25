/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:19:34 by umartin-          #+#    #+#             */
/*   Updated: 2022/01/25 19:24:50 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_read_static(int fd, char *final);
char	*ft_final_rtn(char *final);
char	*ft_clean_final(char *final);
char	*ft_strjoin(char *final, char *rd);
char	*ft_strchr(char *str, int c);

size_t	ft_strlen(const char *str);

#endif