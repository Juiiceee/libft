/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 05:15:12 by lbehr             #+#    #+#             */
/*   Updated: 2023/11/15 16:53:35 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isset(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

size_t	countlettre(char const *s1, char const *set)
{
	size_t	cpt;
	size_t	len;

	cpt = 0;
	len = ft_strlen(s1);
	while (isset(set, s1[cpt]) && s1[cpt])
		cpt++;
	if (cpt == len - 1)
		return (-1);
	while (isset(set, s1[len - 1]))
	{
		cpt++;
		len--;
	}
	return (cpt);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*chaine;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (isset(set, s1[start]) && s1[start])
		start++;
	if (start == (ft_strlen(s1) - 1))
		return (ft_strdup(""));
	while (isset(set, s1[end - 1]))
		end--;
	chaine = ft_substr(s1, start, end - start);
	if (!chaine)
		return (NULL);
	return (chaine);
}
/*int main()
{
	char	hello[] = "abcdba";
	char	he[] = "acb";
	printf ("/%s/",ft_strtrim(hello,he));
}*/