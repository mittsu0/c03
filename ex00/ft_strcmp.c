/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:54:57 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/27 17:46:55 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (!*s1)
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
// 	printf("%d:%d\n", strcmp("ABC", "ABC"), ft_strcmp("ABC", "ABC"));
// 	printf("%d:%d\n", strcmp("ABC", "ABCD"), ft_strcmp("ABC", "ABCD"));
// 	printf("%d:%d\n", strcmp("ABCD", "ABC"), ft_strcmp("ABCD", "ABC"));
// 	printf("%d:%d\n", strcmp("ABCD", "ABCE"), ft_strcmp("ABCD", "ABCE"));
// }
