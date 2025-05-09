/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:41:35 by bschwarz          #+#    #+#             */
/*   Updated: 2025/04/30 09:19:38 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "";
	char to_find = '\0';

	printf("FT: %s\n", ft_strchr(str, to_find));
	printf("OG: %s\n", strchr(str, to_find));
	return (0);
} */