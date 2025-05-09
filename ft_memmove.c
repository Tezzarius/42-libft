/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:12:26 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/07 11:29:13 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t num)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *) dest;
	s = (char *) src;
	if (dest > src)
	{
		while (num--)
			d[num] = s[num];
	}
	else if (dest < src)
	{
		while (num > i)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char	str[20] = "123456789";
	char	str2[20] = "123456789";
	char	str3[20] = "123456789";
	char	str4[20] = "123456789";
	char	str5[20] = "123456789";
	char	str6[20] = "123456789";
	char	dest[20] = "0";
	char	dest2[20] = "0";

	ft_memmove(str + 1, str + 3, 5);
	printf("FT: %s\n", str);
	memmove(str2 + 1, str2 + 3, 5);
	printf("OG: %s\n\n", str2);

	ft_memmove(str3 + 3, str3 + 1, 5);
	printf("FT: %s\n", str3);
	memmove(str4 + 3, str4 + 1, 5);
	printf("OG: %s\n\n", str4);

	ft_memmove(dest, str5, 5);
	printf("FT: %s\n", dest);
	memmove(dest2, str6, 5);
	printf("OG: %s\n", dest2);
	return (0);
} */
