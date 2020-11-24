/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 12:22:32 by cstaats       #+#    #+#                 */
/*   Updated: 2020/11/19 13:22:26 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	while (str[cnt] != '0')
	{
		if (c == str[cnt])
			return ((char *)&str[cnt]);
		cnt--;
	}
	if (c == '\0')
		return ((char *)&str[cnt]);
	return (NULL);
}
