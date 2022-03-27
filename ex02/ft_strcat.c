/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:54:57 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/27 18:19:19 by unix_user        ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_cp;

	dest_cp = dest;
	dest += ft_strlen(dest);
	while (*src)
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
// 	char	str2[10] = "ABCDEFG";
// 	char	str2_cp[10] = "ABCDEFG";

// 	printf("%s:%s\n", strcat(str1, "DEF"), ft_strcat(str1_cp, "DEF"));
// 	printf("%s:%s\n", strcat(str2, "HI"), ft_strcat(str2_cp, "HI"));
// }
