/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 14:40:05 by flhember          #+#    #+#             */
/*   Updated: 2019/05/23 14:41:10 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_free(t_env **data, int flag)
{
	int		i;

	i = 0;
	if ((*data)->map.tab)
	{
		while (i < (*data)->map.size_col)
		{
			if ((*data)->map.tab[i])
				free((*data)->map.tab[i]);
			i++;
		}
		free((*data)->map.tab);
	}
	if (flag)
		free(*data);
}
