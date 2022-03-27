/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:54:57 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/27 17:55:40 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 == *s2)
	{
		if (!*s1 || !--n)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("%d:%d\n", strncmp("ABC", "ABC", 4), ft_strncmp("ABC", "ABC", 4));
// 	printf("%d:%d\n", strncmp("ABCD", "ABC", 3), ft_strncmp("ABCD", "ABC", 3));
// 	printf("%d:%d\n", strncmp("ABCD", "ABC", 4), ft_strncmp("ABCD", "ABC", 4));
// 	printf("%d:%d\n", strncmp("ABCD", "ABD", 3), ft_strncmp("ABCD", "ABD", 3));
// }
