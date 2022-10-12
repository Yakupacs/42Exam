/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:24:11 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/12 16:24:12 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_doubles2(char *str, char c){
	int	i;

	i = 0;
	while (str[i]){
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	check_doubles1(char *str, char c, int pos){
	int	i;

	i = 0;
	while (i < pos){
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char *av[]){
	int i;
	
	i = 0;
	if (ac == 3){
		while (av[1][i]){
			if (check_doubles1(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i] != '\0'){
			if (check_doubles2(av[1], av[2][i])){
				if (check_doubles1(av[2], av[2][i], i))
					write(1, &av[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}