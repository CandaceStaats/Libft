/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 12:30:15 by candace       #+#    #+#                 */
/*   Updated: 2020/11/19 13:16:20 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t cnt;

	cnt = 0;
	while (((const char *)s) != NULL && cnt < n)
	{
		if (((const char *)s)[cnt] == c)
			return ((void *)&s[cnt]);
		cnt++;
	}
	return (NULL);
}
