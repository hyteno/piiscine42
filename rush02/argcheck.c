/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akattel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:42:01 by akattel           #+#    #+#             */
/*   Updated: 2020/02/22 16:47:09 by akattel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int  check(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if(argc <= 1)
	{
		return 0;
	}

	while(argc == 2)
	{
		while(argv[1[i]] < "0" || argv[1[i]] > "9")
		{
			write(1, "Error", 1);
			write(1, '\n', 1);
			return (0);
			i++;
		}
		return (1);
	}

	while (argc >= 3)
	{
		while(argv[2[i]] < "0" || argv[2[i]] > "9")
		{
			write(1, "Error", 1);
			write(1, '\n',1);
			return (0);
		}
		return (1);
}


int main(int argc, char **argv)
{
	if (check(argc, argv))
	{
		if (argc == 2)
			function(argv[1], default_dict)
		else 
			function(argv[2], argv[1])
	}
	return (0);
}
