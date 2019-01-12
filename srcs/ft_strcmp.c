/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 13:42:45 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/10 13:42:46 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int cnt;

	cnt = 0;
	while (s1[cnt] != '\0' && s2[cnt] != '\0' && s1[cnt] == s2[cnt])
		cnt++;
	return (s1[cnt] - s2[cnt]);
}
