/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 13:49:53 by candace       #+#    #+#                 */
/*   Updated: 2020/11/19 13:18:41 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t cnt;
	size_t cntsrc;

	cntsrc = 0;
	cnt = 0;
	while (dst[cnt] != '\0' && cnt < n)
		cnt++;
	while (src[cntsrc] != '\0' && cntsrc < n - cnt - 1)
	{
		dst[cnt + cntsrc] = src[cntsrc];
		cntsrc++;
	}
	while (src[cnt] != '\0')
		cntsrc++;
	return (cnt + cntsrc);
}
