/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 16:03:54 by candace       #+#    #+#                 */
/*   Updated: 2020/11/19 13:20:40 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t cnt;
	size_t needcnt;

	cnt = 0;
	while (hay[cnt] != '\0' && cnt < len)
	{
		if (needle[0] == hay[cnt])
		{
			needcnt = 0;
			while (needle[needcnt] == hay[cnt] && hay[cnt] != '\0'
					&& cnt < len)
			{
				needcnt++;
				cnt++;
				if (needle[needcnt] == '\0')
					return ((char *)&hay[cnt - needcnt]);
			}
		}
		cnt++;
	}
	return (NULL);
}
