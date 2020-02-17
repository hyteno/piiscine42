/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akattel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:05:14 by akattel           #+#    #+#             */
/*   Updated: 2020/02/18 00:15:21 by akattel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (to_find[0] == '\0')
	return (str);

	i = 0;
	while(str[i])
	{
		j = 0;
		if(str[i] == to_find[j])
		{
			while (str[i + j] == to_find [j])
			{
					j++;
				if(to_find[j] == '\0')
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

int main()
{
	char str1[20] = "bonjourhello";
	char str2[10] = "hello";
	char *test;
	test = ft_strstr(str1, str2);
	printf("%s", test);
}
