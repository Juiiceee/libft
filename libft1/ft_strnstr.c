/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:13:08 by lbehr             #+#    #+#             */
/*   Updated: 2023/11/07 23:44:47 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	t;
	size_t	len_b;
	char	*bi;

	bi = (char *)big;
	i = 0;
	len_b = ft_strlen(little);
	if (len_b == 0 || big == little)
		return (bi);
	while (bi[i] && i < len)
	{
		t = 0;
		while (bi[i + t] == little[t] && little[t] && i + t < len && bi[i + t])
		{
			t++;
		}
		if (t == len_b)
			return (bi + i);
		i++;
	}
	return (0);
}

/*int main() {
    char haystack[] = "anticonstitutionnellement";
    char needle[] = "sti";
    printf("ft_strnstr: %s\n", ft_strnstr(haystack, needle, 9));

    return 0;
}*/