/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_utils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:09:18 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/11/13 18:13:03 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_cmd	*add_cmd(t_cmd *cmd)
{
	t_cmd	*new;

	new = ft_calloc(1, sizeof(t_cmd));
	cmd->next = new;

	return (new);
}