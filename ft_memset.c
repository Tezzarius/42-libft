/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:36:27 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/01 10:22:33 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*p;

	p = (char *) ptr;
	while (num > 0)
	{
		p[num - 1] = (char) value;
		num--;
	}
	return (ptr);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char	str[10] = "Test";
	char	str2[10] = "Test";

	ft_memset(str, '*', 5);
	printf("FT: %s\n", str);
	memset(str2, '*', 5);
	printf("OG: %s\n", str2);
	return (0);
} */