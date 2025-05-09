/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:06:05 by bschwarz          #+#    #+#             */
/*   Updated: 2025/04/29 13:38:40 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int main()
{
	int	c;

	c = 'z';
	printf("FT: %c\n", ft_toupper('9'));
	printf("OG: %c\n\n", toupper('9'));
	printf("FT: %c\n", ft_toupper('G'));
	printf("OG: %c\n\n", toupper('G'));
	printf("FT: %c\n", ft_toupper('$'));
	printf("OG: %c\n\n", toupper('$'));
	printf("FT: %c\n", ft_toupper('t'));
	printf("OG: %c\n\n", toupper('t'));
	printf("FT: %c\n", ft_toupper(c));
	printf("OG: %c\n", toupper(c));
	return (0);
} */