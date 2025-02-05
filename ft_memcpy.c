/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:19:11 by tatev             #+#    #+#             */
/*   Updated: 2025/01/24 18:26:44 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmpsrc;
	unsigned char	*tmpdst;

	if (dst == NULL && src == NULL)
		return (dst);
	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	while (n > 0)
	{
		*(tmpdst++) = *(tmpsrc++);
		n--;
	}
	return (dst);
}

// int main(void){
// 	char src[] = "Hello!";
//     char dest[10];

//     //ft_memcpy(dest, src, 2); 

//     //printf("Source: %s\n", src);
//     //printf("Destination: %s\n", dest);

//     return 0;
// }