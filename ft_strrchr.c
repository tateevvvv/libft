/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 02:27:24 by tasargsy          #+#    #+#             */
/*   Updated: 2025/02/08 16:59:28 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = NULL;
	while (*s)
	{
		if (*s == (const char)c)
			res = (char *)s;
		s++;
	}
	if (*s == (const char)c)
		return ((char *)s);
	return (res);
}

// int main(void){
// 	char esim[] = "asdfghdj";
// 	int c = 'd';
// 	printf("%s", ft_strrchr(esim, c));
// 	return (0);
// }