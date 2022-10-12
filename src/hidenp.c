/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:23:59 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/12 16:24:00 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return(i);
}
int main(int ac, char *av[]){

	int i;
	int count = 0;
	int j;
	int len = ft_strlen(av[1]);
	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[2][j])
		{
				
			if (av[1][i] == av[2][j])
			{
				if (i + 1 == len)
				{
					write(1,"1",1);
					return(0);
				}
				i++;
			}
			j++;
		}
		write(1,"0",1);
	}
	else
		write(1,"\n",1);
	return(0);
}