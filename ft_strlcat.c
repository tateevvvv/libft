/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:25:02 by tasargsy          #+#    #+#             */
/*   Updated: 2025/01/24 19:42:38 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (!dstsize)
		return (srclen);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	while (src[i] && dstlen + i < dstsize - 1)
	{
		dst[dstlen + 1] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// int main(void){
// 	char src[7] = "barigun";
// 	char dst[4] = " xuy";
// 	ft_strlcat(dst, src, 100);
// 	printf("%s", dst);
// 	return 0;
// }