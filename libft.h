/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <afgoncal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:57:47 by afgoncal          #+#    #+#             */
/*   Updated: 2023/04/27 19:58:01 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define HEXMIN "0123456789abcdef"
# define HEXMAX "0123456789ABCDEF"
# define DECIMAL "0123456789"

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	size_t			content_size;
}	t_list;

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_strlen(const char *str);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);
int				ft_strlcpy(char *dest, char *src, size_t n);
int				ft_strlcat(char *dst, char *src, size_t n);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *str, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
int				ft_putchar(char c);
int				ft_strlen(const char *str);
int				get_hex_len(unsigned long long n);
int				get_int_len(long n);
int				ft_printf(const char *str, ...);
char			*ft_getintstr(long n);
char			*ft_gethexstr(unsigned long long num, char *base);
int				ft_putstr(char *str);
char			*ft_strchr(const char *str, int c);
char			*ft_strrev(char *str);
#endif