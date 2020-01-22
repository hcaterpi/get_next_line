/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcaterpi <hcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:00:11 by hcaterpi          #+#    #+#             */
/*   Updated: 2019/09/16 14:57:55 by hcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct	s_list
{
	int				fd;
	char			*str;
	struct s_list	*next;
}				t_list;

t_list			*ft_list_add(t_list **begin_list, int fd, char *str);
t_list			*ft_list_create(int fd, char *str);
int				ft_list_delete(t_list **begin_list, int fd);
t_list			*ft_list_find(t_list *begin_list, int fd);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlen(const char *s);
char			*ft_strnew(size_t size);
char			*ft_strsub(char const *s, unsigned int start, size_t len);

#endif
