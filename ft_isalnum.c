/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:40:48 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/01 10:22:02 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

/* #include <stdio.h>
#include <ctype.h>

int main()
{
	int	c;

	c = 32;
	printf("FT: %d\n", ft_isalnum('9'));
	printf("OG: %d\n\n", isalnum('9'));
	printf("FT: %d\n", ft_isalnum('G'));
	printf("OG: %d\n\n", isalnum('G'));
	printf("FT: %d\n", ft_isalnum('$'));
	printf("OG: %d\n\n", isalnum('$'));
	printf("FT: %d\n", ft_isalnum('t'));
	printf("OG: %d\n\n", isalnum('t'));
	printf("FT: %d\n", ft_isalnum(c));
	printf("OG: %d\n", isalnum(c));
	return (0);
} */