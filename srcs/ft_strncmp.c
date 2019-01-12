/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 13:03:36 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/11 13:03:37 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t cnt;

	cnt = 0;
	while (s1[cnt] != '\0' && s2[cnt] != '\0' && s1[cnt] == s2[cnt] && n > cnt)
		cnt++;
	return (s1[cnt] - s2[cnt]);
}
