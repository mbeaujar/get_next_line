/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:33:20 by mbeaujar          #+#    #+#             */
/*   Updated: 2020/08/17 23:13:20 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# define MAX_FD 2147483647

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1

# endif

char		*ret_line(char *save);
char		*next_line_buff(char *save);
int			get_next_line(int fd, char **line);
size_t		ft_strlen(const char *s);
int			is_endl(char *save);
char		*ft_strjoin(char *s1, char *s2);
void		*ft_memmove(void *dst, const void *src, size_t len);

#endif
