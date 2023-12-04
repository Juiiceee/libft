/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:52:18 by lbehr             #+#    #+#             */
/*   Updated: 2023/11/15 16:52:51 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	if (!s)
		return (NULL);
	str = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			str = (char *)s;
		s++;
	}
	if (*s == (unsigned char)c)
		str = (char *)s;
	return (str);
}
/*#include <stdio.h>
int main ()
{
	char hello[] = "Helleo";
	printf("%s\n",hello);
	printf("%s", ft_strrchr(hello,'e'));
	//char he[] = ft_strrchr(hello,'e');
	//printf("%s\n",he);
}*/