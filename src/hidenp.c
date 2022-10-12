/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:23:59 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/12 21:50:15 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>
*/

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