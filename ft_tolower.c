/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:09:21 by tasargsy          #+#    #+#             */
/*   Updated: 2025/01/24 20:13:11 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (a + 32);
	}
	return (a);
}

// int main(void){
// 	char a = 'A';
// 	printf("%d", ft_tolower(a));
// 	return (0);
// }