/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:24:13 by lbehr             #+#    #+#             */
/*   Updated: 2023/11/02 13:12:00 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	lendest;
	unsigned int	lensrc;
	unsigned int	i;

	i = 0;
	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size == 0)
	{
		return (lensrc);
	}
	while (src[i] && (lendest + i < size - 1))
	{
		dst[lendest + i] = src[i];
		i++;
	}
	dst[lendest + i] = '\0';
	if (lendest > size)
		return (lensrc + size);
	else
		return (lendest + lensrc);
}
/*#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
    char st1[] = "je suis une string";
    char st2[] = " c'est fou non ?";

    int s; 
    s = strlcat(st1, st2, 25);

    printf("%s\n", st1);
    printf("%d", s);

    return (0);
}*/