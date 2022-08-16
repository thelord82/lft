/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:43:17 by chughes           #+#    #+#             */
/*   Updated: 2022/05/02 10:43:18 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10000
#endif

static ssize_t	zread(int fd, char *buffer)
{
	int	i;

	i = read(fd, buffer, BUFFER_SIZE);
	buffer[i] = '\0';
	return (i);
}

static char	*ft_rmvline(char **s)
{
	char	*new_stash;

	new_stash = NULL;
	if (ft_strchr(*s, '\n') && ft_strlen(*s) > 1)
		new_stash = ft_strdup(*s + ft_linelen(*s) + 1);
	free(*s);
	return (new_stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		buffer[BUFFER_SIZE + 1];
	char		*rtn;
	int			count;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	count = zread(fd, buffer);
	while (count > 0)
	{
		if (stash == NULL)
			stash = ft_calloc(1, sizeof(char));
		stash = ft_strappend(stash, buffer);
		if (ft_strchr(stash, '\n'))
			break ;
		count = zread(fd, buffer);
	}
	if (stash == NULL)
		return (NULL);
	if (ft_strchr(stash, '\n'))
		rtn = ft_substr(stash, 0, ft_linelen(stash, '\n') + 1);
	else
		rtn = ft_substr(stash, 0, ft_linelen(stash, '\n'));
	stash = ft_rmvline(&stash);
	return (rtn);
}
