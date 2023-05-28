/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:52:21 by khorike           #+#    #+#             */
/*   Updated: 2023/05/26 15:07:18 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>
# include <fcntl.h>

# ifndef  BUFFER_SIZE

#  define  BUFFER_SIZE 42

# endif

char	*fr_strjoin_free_temp(char *buffer, char *buf);
char	*ft_left_line(char *buffer);
char	*ft_got_line(char *buffer);
char	*read_file(int fd, char *one_fd_line);
char	*get_next_line(int fd);

size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
char	*ft_strchr(const char *s, int c);
void	*ft_calloc(size_t number, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);

#endif