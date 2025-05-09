/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:33:41 by bschwarz          #+#    #+#             */
/*   Updated: 2025/04/29 13:35:03 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

/* #include <stdio.h>
#include <ctype.h>

int main()
{
	int	c;

	c = 52;
	printf("FT: %d\n", ft_isdigit('9'));
	printf("OG: %d\n\n", isdigit('9'));
	printf("FT: %d\n", ft_isdigit('G'));
	printf("OG: %d\n\n", isdigit('G'));
	printf("FT: %d\n", ft_isdigit('$'));
	printf("OG: %d\n\n", isdigit('$'));
	printf("FT: %d\n", ft_isdigit('t'));
	printf("OG: %d\n\n", isdigit('t'));
	printf("FT: %d\n", ft_isdigit(c));
	printf("OG: %d\n", isdigit(c));
	return (0);
} */