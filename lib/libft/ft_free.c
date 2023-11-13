/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:23:33 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/11/13 18:09:26 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(void **ptr)
{
	if (ptr && *ptr)
	{
		free(ptr);
		*ptr = NULL;
	}
}

void	arr_free(void **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		ft_free(&arr[i]);
		i++;
	}
	ft_free(arr);
}
