/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:13:18 by bschwarz          #+#    #+#             */
/*   Updated: 2025/04/29 13:37:29 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int main()
{
	int	c;

	c = 'Z';
	printf("FT: %c\n", ft_tolower('9'));
	printf("OG: %c\n\n", tolower('9'));
	printf("FT: %c\n", ft_tolower('G'));
	printf("OG: %c\n\n", tolower('G'));
	printf("FT: %c\n", ft_tolower('$'));
	printf("OG: %c\n\n", tolower('$'));
	printf("FT: %c\n", ft_tolower('t'));
	printf("OG: %c\n\n", tolower('t'));
	printf("FT: %c\n", ft_tolower(c));
	printf("OG: %c\n", tolower(c));
	return (0);
} */