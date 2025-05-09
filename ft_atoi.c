/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:10:02 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/08 14:01:00 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *src)
{
	int	i;
	int	neg;
	int	dest;

	i = 0;
	neg = 1;
	dest = 0;
	while ((src[i] == ' ') || (src[i] == '\t') || (src[i] == '\n')
		|| (src[i] == '\v') || (src[i] == '\f') || (src[i] == '\r'))
		i++;
	if ((src[i] == '+') || (src[i] == '-'))
	{
		if (src[i] == '-')
			neg = -1;
		i++;
	}
	while ((src[i] >= '0') && (src[i] <= '9'))
	{
		dest = dest * 10;
		dest = dest + (src[i] - '0');
		i++;
	}
	return (dest * neg);
}

/* #include <stdio.h>

int main()
{
	printf("FT: %d\n", ft_atoi("+345fgh"));
	printf("OG: %d\n\n", atoi("+345fgh"));
	printf("FT: %d\n", ft_atoi("  -345fgh"));
	printf("OG: %d\n\n", atoi("  -345fgh"));
	printf("FT: %d\n", ft_atoi("--345fgh"));
	printf("OG: %d\n", atoi("--345fgh"));
	return (0);
} */
