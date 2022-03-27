/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:54:57 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/27 18:24:10 by unix_user        ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	str_len;
	int	to_find_len;

	i = 0;
	str_len = ft_strlen(str);
	to_find_len = ft_strlen(to_find);
	if (*to_find == '\0')
		return (str);
	while (i <= str_len - to_find_len)
	{
		if (str[i] == *to_find)
			if (ft_strncmp(str + i, to_find, to_find_len) == 0)
				return (str + i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s1[] = "abcabcabccabb";
// 	char s2[] = "abb";
// 	char s3[] = "abbb";
// 	char s4[] = "abcdefghijklmnopqr";

// 	printf("match %s:%s\n", strstr(s1, s2), ft_strstr(s1, s2));
// 	printf("not match %s:%s\n", strstr(s1, s3), ft_strstr(s1, s3));
// 	printf("too long %s:%s\n", strstr(s1, s4), ft_strstr(s1, s4));
// 	printf("null %s:%s\n", strstr(s1, ""), ft_strstr(s1, ""));
// }
