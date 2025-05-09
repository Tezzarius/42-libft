/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:21:54 by bschwarz          #+#    #+#             */
/*   Updated: 2025/04/29 13:33:32 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

/* #include <stdio.h>
#include <ctype.h>

int main()
{
	int	c;

	c = 32;
	printf("FT: %d\n", ft_isalpha('9'));
	printf("OG: %d\n\n", isalpha('9'));
	printf("FT: %d\n", ft_isalpha('G'));
	printf("OG: %d\n\n", isalpha('G'));
	printf("FT: %d\n", ft_isalpha('$'));
	printf("OG: %d\n\n", isalpha('$'));
	printf("FT: %d\n", ft_isalpha('t'));
	printf("OG: %d\n\n", isalpha('t'));
	printf("FT: %d\n", ft_isalpha(c));
	printf("OG: %d\n", isalpha(c));
	return (0);
} */