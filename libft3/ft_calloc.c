/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:57:01 by lbehr             #+#    #+#             */
/*   Updated: 2023/11/12 20:20:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*retour;
	size_t	i;

	i = nmemb * size;
	if (nmemb && i / nmemb != size)
		return (NULL);
	retour = malloc(nmemb * size);
	if (!retour)
		return (NULL);
	ft_bzero(retour, nmemb * size);
	return (retour);
}
