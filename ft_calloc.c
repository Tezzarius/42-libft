/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:10:56 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/01 10:27:43 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t len, size_t size)
{
	char	*ptr;

	ptr = malloc(len * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, len * size);
	return (ptr);
}

/* #include <stdio.h>
#include <stdlib.h>

int main() 
{
	int *ptr = (int *)calloc(5, 5);
	printf("%d", ptr[3]);
	free(ptr);
	return (0);
} */