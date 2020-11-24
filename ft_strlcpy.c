/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 10:39:32 by cstaats       #+#    #+#                 */
/*   Updated: 2020/11/19 13:19:37 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t cnt;

	cnt = 0;
	while (src[cnt] != '\0' && cnt < (n - 1))
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	return (cnt);
}
