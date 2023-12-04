/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:39:16 by lbehr             #+#    #+#             */
/*   Updated: 2023/11/08 02:19:47 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*new;
	size_t	i;

	i = 0;
	new = malloc(ft_strlen(src) + 1);
	if (new == 0)
		return (0);
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*#include <stdio.h>
int main(){
	char	*test = "hello comment ca va ?";
	char *hello = ft_strdup(test);
	printf("%s",hello);
}*/