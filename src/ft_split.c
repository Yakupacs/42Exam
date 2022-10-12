/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:23:57 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/12 16:23:58 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str){
	int	i;
	int	j;
	int	k;
	char	**split;

	i = 0;
	k = 0;
	if (!(split = malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == 32 || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i]){
		j = 0;
		if (!(split[k] = malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != 32 && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];
		while (str[i] == 32 || str[i] == '\t' || str[i] == '\n')
			i+= 1;
		split[k][j] = '\0';
		k += 1;
	}
	split[k] = NULL;
	return (split);
}