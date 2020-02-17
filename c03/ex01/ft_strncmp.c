/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akattel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 23:38:38 by akattel           #+#    #+#             */
/*   Updated: 2020/02/16 23:38:47 by akattel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

 	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i<n)
	{
		i++;
	}

	while (i < n)
	{
		return (s1[i] - s2[i]);
		i++;
	}
	return(0);
}

int main()
{
	unsigned int n = 6;
	char *str1;
	str1 = "helloc";
	char *str2;
	str2 = "helloa";
	printf("%d",ft_strncmp(str1, str2, n));
	return (0);
}
