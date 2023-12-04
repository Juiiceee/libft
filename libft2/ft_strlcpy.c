/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:23:31 by lbehr             #+#    #+#             */
/*   Updated: 2023/11/02 13:12:05 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	n;

	n = 0;
	if (size != 0)
	{
		while (src[n] != '\0' && n < (size - 1))
		{
			dst[n] = src[n];
			n++;
		}
		dst[n] = '\0';
	}
	while (src[n] != '\0')
		n++;
	return (n);
}
/*#include <stdio.h>
int main()
{
	char str[] = "Hello";
	char strDest[] = {0};
	int r = ft_strlcpy(strDest, str, 5);
	//int a = strlcpy(strDest, str, 4);
	printf("%s\n", strDest);
	printf("%d\n", r);
	//printf("%d\n", a);
}*/