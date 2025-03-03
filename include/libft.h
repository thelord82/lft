/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:16:52 by chughes           #+#    #+#             */
/*   Updated: 2022/10/13 15:59:30 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdint.h>

// Linked list struct
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// libft functions
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *str1);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
size_t	ft_strlen_before(char *s, char *c);
size_t	ft_strlen_until(char *s, char c);
void	free_double_array(void **array);
int		ft_numlen_base(long nbr, long base);
void	sort_int_tab(int *tab, unsigned int size);
char	*ft_free(void *ptr);
void	ft_swap(int *a, int *b);
void	*xfree(void *ptr);
char	*strcdup(char *basestr, char *matchchrs);
char	*join_free_both(char *s1, char *s2);
int		*int_realloc(int *old_array, int old_size, int size);
char	*ft_strtrim_free(char *s1, char const *set);
int		ft_isspace(char c);

// ft_printf functions
char	*ft_itox(int nbr);
char	*ft_utoa(unsigned int nbr);
char	*ft_ptoa(uintptr_t nbr);
char	*str_append(char *s1, char *s2);
char	*chr_prepend(int c, char *str);

// get_next_line functions
char	*get_next_line(int fd);
int		ft_linelen(const char *str);
char	*str_prepend(char *s1, char *s2);

// New functions
char	*chr_append(int c, char *str);
char	*ft_strndup(const char *str, int n);
char	*strpop(char *str, int position);

#endif
