/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:58:00 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/01 10:23:01 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char *src, size_t num)
{
	size_t	i;

	i = 0;
	if (num > 0)
	{
		while ((src[i] != '\0') && (i < num - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char	*str = "0123456789";
	char	dest[20] = "0";

	printf("%d\n", ft_strlcpy(dest, str, 7));
	printf("%s", dest);
	return (0);
} */