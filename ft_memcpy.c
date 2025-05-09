/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:18:54 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/01 10:22:26 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, void *src, size_t num)
{
	char	*d;
	char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (char *) dest;
	s = (char *) src;
	if (!*s)
		return (0);
	while (num--)
		d[num] = s[num];
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int	main()
{
	char	src[20] = "Tabula Rasa";
	char	dest[20] = " ";
	char	src2[20] = "Tabula Rasa";
	char	dest2[20] = " ";

	ft_memcpy(dest, src, 8);
	printf("FT: %s\n", dest);
	memcpy(dest2, src2, 8);
	printf("OG: %s\n", dest2);
	return (0);
} */