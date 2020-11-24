/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 16:52:32 by cstaats       #+#    #+#                 */
/*   Updated: 2020/11/19 13:20:26 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int cnt;

	cnt = 0;
	while (str1[cnt] == str2[cnt] && cnt <= n && str1[cnt] != '\0'
	&& str2[cnt] != '\0')
	{
		cnt++;
		if (str1[cnt] < str2[cnt])
			return (-1);
		else if (str1[cnt] > str2[cnt])
			return (1);
	}
	return (0);
}
