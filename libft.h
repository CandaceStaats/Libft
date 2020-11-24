/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 11:20:32 by cstaats       #+#    #+#                 */
/*   Updated: 2020/11/21 10:41:52 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}				t_list;
int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
unsigned int	ft_strlen(char *str);
int				ft_atoi(char *str);
int				ft_strncmp(const char *str1, const char *str2, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t n);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
char			*ft_strnstr(const char *hay, const char *needle, size_t len);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_calloc(size_t nitems, size_t size);
char			*ft_strdup(const char *s1);
#endif
