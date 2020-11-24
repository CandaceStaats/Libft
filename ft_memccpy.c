/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 11:47:16 by candace       #+#    #+#                 */
/*   Updated: 2020/11/19 13:15:43 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t cnt;

	cnt = 0;
	while ((const char *)src != NULL && cnt < n)
	{
		((char *)dst)[cnt] = ((char *)src)[cnt];
		if ((((char *)src)[cnt - 1]) == c)
			return (&dst[cnt]);
		cnt++;
	}
	return (NULL);
}
