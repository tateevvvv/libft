/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:31:49 by tatev             #+#    #+#             */
/*   Updated: 2025/02/05 20:58:12 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d_ptr;
	unsigned char	*s_ptr;

	if (!dst && !src)
		return (NULL);
	d_ptr = (unsigned char *)dst;
	s_ptr = (unsigned char *)src;
	if (dst > src)
		while (len-- > 0)
			d_ptr[len] = s_ptr[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

// int main(void){
// 	char src[1000] = "barigun";
// 	char dst[1000];

// 	//printf("%p", ft_memmove(dst, src, 7));
// 	return 0;
// }