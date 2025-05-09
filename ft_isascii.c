/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:44:50 by bschwarz          #+#    #+#             */
/*   Updated: 2025/04/30 12:33:25 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c > 127 || c < 0)
		return (0);
	return (1);
}

/* #include <stdio.h>
#include <ctype.h>

int main()
{
	int	c;

	c = 128;
	printf("FT: %d\n", ft_isascii('9'));
	printf("OG: %d\n\n", isascii('9'));
	printf("FT: %d\n", ft_isascii('G'));
	printf("OG: %d\n\n", isascii('G'));
	printf("FT: %d\n", ft_isascii('$'));
	printf("OG: %d\n\n", isascii('$'));
	printf("FT: %d\n", ft_isascii('t'));
	printf("OG: %d\n\n", isascii('t'));
	printf("FT: %d\n", ft_isascii(c));
	printf("OG: %d\n", isascii(c));
	return (0);
} */