/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 02:27:24 by tasargsy          #+#    #+#             */
/*   Updated: 2025/02/05 21:11:05 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (--len >= 0)
	{
		if (s[len] == c)
			return ((char *)&s[len]);
	}
	return (NULL);
}

// int main(void){
// 	char esim[] = "asdfghdj";
// 	int c = 'd';
// 	printf("%s", ft_strrchr(esim, c));
// 	return (0);
// }