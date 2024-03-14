/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalsadi- <oalsadi-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:50:40 by oalsadi-          #+#    #+#             */
/*   Updated: 2024/03/11 16:50:44 by oalsadi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*duplicate;

	len = ft_strlen(s1) + 1;
	duplicate = (char *)malloc(len);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	ft_memcpy(duplicate, s1, len);
	return (duplicate);
}