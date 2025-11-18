/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:34:48 by yallo             #+#    #+#             */
/*   Updated: 2023/08/29 19:54:03 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*buf;

	i = 0;
	buf = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!buf)
		return (NULL);
	while (s[i])
	{
		buf[i] = s[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}
