/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:33:20 by mbeaujar          #+#    #+#             */
/*   Updated: 2020/08/11 21:36:48 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# define MAX_FD 1024

char		*ret_line(char *save);
char		*next_line_buff(char *save);
int			get_next_line(int fd, char **line);
size_t		ft_strlen(const char *s);
int			is_endl(char *save);
char		*ft_strjoin(char *s1, char *s2);
void		*ft_memmove(void *dst, const void *src, size_t len);

#endif
