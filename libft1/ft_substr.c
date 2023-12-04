/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:01:59 by lbehr             #+#    #+#             */
/*   Updated: 2023/11/13 15:38:06 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*chaine;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		chaine = ft_calloc(1, 1);
		if (!chaine)
			return (NULL);
		return (chaine);
	}
	i = ft_strlen(s + start);
	if (i > len)
		i = len;
	chaine = malloc(i + 1);
	if (!chaine)
		return (NULL);
	chaine[i] = '\0';
	while (i--)
		chaine[i] = s[start + i];
	return (chaine);
}
