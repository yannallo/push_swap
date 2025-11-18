/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:45:07 by yallo             #+#    #+#             */
/*   Updated: 2023/10/24 11:38:43 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buf;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end - 1 > start && ft_strchr(set, s1[end - 1]))
		end--;
	buf = malloc(sizeof(char) * (end - start + 1));
	if (!buf)
		return (NULL);
	ft_strlcpy(buf, s1 + start, end - start + 1);
	return (buf);
}
