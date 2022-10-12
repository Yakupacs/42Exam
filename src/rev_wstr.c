/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:24:01 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/12 21:50:37 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display
'\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "le temps du mepris precede celui de l'indifference" | cat -e
l'indifference de celui precede mepris du temps le$
$> ./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "il contempla le mont" | cat -e
mont le contempla il$
$> ./rev_wstr | cat -e
$
$>
*/

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