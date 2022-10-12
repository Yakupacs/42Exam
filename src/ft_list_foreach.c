/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:23:48 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/12 16:23:49 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_list_foreach(t_list *begin_list, void (*f)(void *)){
	while (begin_list){
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}