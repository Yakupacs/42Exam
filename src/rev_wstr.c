/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:24:01 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/12 16:24:02 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	int i;
	int j;
	int k;
	int num;
	char	words[256][4096];

	j = 0;
	i = 0;
	k = 0;	
	if (argc == 2){
		while (argv[1][i]){
			k = 0;
			while (argv[1][i] == 32 && argv[1][i])
				i++;
			while (argv[1][i] != 32 && argv[1][i]){
				words[j][k] += argv[1][i];
				i++;
				k++;
			}
			j++;
		}
		j -= 1;
		while (j != -1){
			i = 0;
			while (words[j][i]){
				write(1, &words[j][i], 1);
				i++;
			}
			if (j != 0){
				write(1, " ", 1);
				}
			j--;
		}
	}
	write(1, "\n", 1);
}