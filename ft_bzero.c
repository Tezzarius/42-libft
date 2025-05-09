/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:08:39 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/08 14:01:27 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *ptr, size_t num)
{
	char	*p;

	p = (char *) ptr;
	while (num > 0)
	{
		p[num -1] = '\0';
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

	ft_bzero(str, 5);
	printf("FT: %s\n", str);
	bzero(str2, 5);
	printf("OG: %s\n", str2);
	return (0);
} */
