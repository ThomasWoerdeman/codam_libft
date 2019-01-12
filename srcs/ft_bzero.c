/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 14:25:54 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/12 14:25:55 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (cnt < n)
	{
		((char *)s)[cnt] = '\0';
		cnt++;
	}
}
