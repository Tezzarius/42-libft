/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:58:00 by bschwarz          #+#    #+#             */
/*   Updated: 2025/04/29 13:46:20 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char	*c;

	c = "I'm just a little Test!";
	printf("FT: %d\n", ft_strlen("0123456789"));
	printf("OG: %lu\n\n", strlen("0123456789"));
	printf("FT: %d\n", ft_strlen("0123456"));
	printf("OG: %lu\n\n", strlen("0123456"));
	printf("FT: %d\n", ft_strlen("0123"));
	printf("OG: %lu\n\n", strlen("0123"));
	printf("FT: %d\n", ft_strlen("0"));
	printf("OG: %lu\n\n", strlen("0"));
	printf("FT: %d\n", ft_strlen(c));
	printf("OG: %lu\n", strlen(c));
	return (0);
} */