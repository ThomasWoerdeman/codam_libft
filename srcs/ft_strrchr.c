/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 16:38:05 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/11 16:38:06 by twoerdem      ########   odam.nl         */
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

char	*ft_strrchr(const char *s, int c)
{
	int hc;
	int pos;

	hc = 0;
	pos = 0;
	while (s[hc] != '\0')
	{
		if (s[hc] == c)
			pos = hc;
		hc++;
	}
	if (pos > 0)
		return (haydup(s, pos));
	return (NULL);
}
