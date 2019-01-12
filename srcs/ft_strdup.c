/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 13:44:32 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/10 13:44:34 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	int		cnt;
	int		len;

	cnt = 0;
	while (s1[cnt] != '\0')
	{
		cnt++;
	}
	ret = malloc(sizeof(char) * cnt);
	len = 0;
	while (len < cnt)
	{
		ret[len] = s1[len];
		len++;
	}
	ret[len] = '\0';
	return (ret);
}
