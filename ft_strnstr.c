/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:04:18 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/01 10:23:12 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*find)
		return ((char *) src);
	while (i < len && src[i] != '\0')
	{
		j = 0;
		while (src[i + j] == find[j] && i + j < len && src [i + j] != '\0')
			j++;
		if (find[j] == '\0')
			return ((char *) &src[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int main()
{
	char *s1 = "A";
	char *s2 = "FF";
	size_t max = strlen(s1);
	char *i2 = ft_strnstr(s1, s2, 20);
	printf("%s", i2);
	return (0);
} */