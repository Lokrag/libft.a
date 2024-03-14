/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalsadi- <oalsadi-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:45:20 by oalsadi-          #+#    #+#             */
/*   Updated: 2024/03/11 16:45:23 by oalsadi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_cpy;
	const unsigned char	*src_cpy;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_cpy = (unsigned char *)dest;
	src_cpy = (const unsigned char *)src;
	if (dest <= src)
	{
		while (n--)
			*dest_cpy++ = *src_cpy++;
	}
	else
	{
		dest_cpy += n;
		src_cpy += n;
		while (n--)
			*--dest_cpy = *--src_cpy;
	}
	return (dest);
}