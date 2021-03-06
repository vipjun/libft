/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwong <juwong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 02:21:43 by juwong            #+#    #+#             */
/*   Updated: 2018/06/29 14:12:54 by juwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strclen(const char *s, char c)
{
	size_t	i;

	i = 0;
	if (!*s)
		return (0);
	while (*s != (char)c && *s)
	{
		i++;
		s++;
	}
	return (i);
}
