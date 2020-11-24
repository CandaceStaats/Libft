/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 15:53:16 by candace       #+#    #+#                 */
/*   Updated: 2020/11/19 13:16:40 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t cnt;

	cnt = 0;
	while ((const char *)src && cnt < (n - 1))
	{
		((char *)dst)[cnt] = ((char *)src)[cnt];
		cnt++;
	}
	return (dst);
}
