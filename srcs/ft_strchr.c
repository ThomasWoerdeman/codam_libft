/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 16:21:01 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/11 16:21:02 by twoerdem      ########   odam.nl         */
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

char	*ft_strchr(const char *s, int c)
{
	int hc;

	hc = 0;
	while (s[hc] != '\0')
	{
		if (s[hc] == c)
			return (haydup(s, hc));
		hc++;
	}
	return (NULL);
}
