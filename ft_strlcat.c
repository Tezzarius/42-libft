/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 09:24:30 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/08 14:11:09 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	destlen = 0;
	while (destlen < size && dest[destlen])
		destlen++;
	if (destlen == size)
		return (destlen + srclen);
	i = 0;
	while (src[i] && (destlen + i + 1) < size)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char str[14] = "i";

	printf("%d\n", ft_strlcat(str, " don't know what i should write....", 15));
	printf("%s\n", str);
	return (0);
} */
