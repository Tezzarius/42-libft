/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:49:54 by bschwarz          #+#    #+#             */
/*   Updated: 2025/04/29 13:35:43 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

/* #include <stdio.h>
#include <ctype.h>

int main()
{
	int	c;

	c = 15;
	printf("FT: %d\n", ft_isprint('9'));
	printf("OG: %d\n\n", isprint('9'));
	printf("FT: %d\n", ft_isprint('G'));
	printf("OG: %d\n\n", isprint('G'));
	printf("FT: %d\n", ft_isprint('$'));
	printf("OG: %d\n\n", isprint('$'));
	printf("FT: %d\n", ft_isprint('t'));
	printf("OG: %d\n\n", isprint('t'));
	printf("FT: %d\n", ft_isprint(c));
	printf("OG: %d\n", isprint(c));
	return (0);
} */