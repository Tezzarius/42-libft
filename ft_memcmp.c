/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:57:06 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/01 10:22:18 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *src1, const void *src2, size_t n)
{
	unsigned char	*s2;
	unsigned char	*s1;
	unsigned int	i;

	s1 = (unsigned char *) src1;
	s2 = (unsigned char *) src2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
