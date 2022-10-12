/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:23:55 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/12 16:23:57 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end){
	int	*range;
	int	i;

	i = 0;
	if (start > end)
		range = malloc(sizeof(int) * (start - end) + 1);
	else
		range = malloc(sizeof(int) * (end - start) + 1);
	while (start != end){
		range[i++] = start;
		if (start > end)
			start += -1;
		else
			start -= 1;
	}
	range[i] = start;
	return (range);
}