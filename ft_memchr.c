/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:30:07 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/03 10:44:21 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *src, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *) src;
	while (i < len)
	{
		if (s[i] == (unsigned char) c)
			return (&s[i]);
		i++;
	}
	return (0);
}

/* int main ()
{
	char *src = "/|\x12\xff\x09\0\x42\042\0\42|\\";
	int size = 12;

	ft_memchr(src, '\0', size);
	return (0);
} */
