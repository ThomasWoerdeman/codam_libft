/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 11:45:20 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/11 11:45:21 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*haydup(const char *s1, int start)
{
	char	*ret;
	int		cnt;
	int		len;

	cnt = start;
	while (s1[cnt] != '\0')
		cnt++;
	ret = malloc(sizeof(char) * cnt);
	len = 0;
	while (s1[start] != '\0')
	{
		ret[len] = s1[start];
		len++;
		start++;
	}
	ret[len] = '\0';
	return (ret);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t hc;
	size_t nc;

	hc = 0;
	if (needle[0] == '\0')
		return (haydup(haystack, hc));
	while (haystack[hc] != '\0' && hc < len)
	{
		nc = 0;
		while (haystack[hc + nc] == needle[nc])
		{
			nc++;
			if (needle[nc] == '\0')
				return (haydup(haystack, hc));
		}
		hc++;
	}
	return (NULL);
}
