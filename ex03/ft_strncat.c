/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:54:57 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/27 18:19:51 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_cp;

	dest_cp = dest;
	dest += ft_strlen(dest);
	while (*src && nb--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_cp);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[10] = "ABC";
// 	char	str1_cp[10] = "ABC";
// 	char	str2[10] = "ABC";
// 	char	str2_cp[10] = "ABC";

// 	printf("%s:%s\n", strncat(str1, "DEFG", 2), ft_strncat(str1_cp, "DEFG", 2));
// 	printf("%s:%s\n", strncat(str2, "DEFG", 9), ft_strncat(str2_cp, "DEFG", 9));
// }
