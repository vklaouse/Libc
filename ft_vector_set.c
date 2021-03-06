/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/23 01:50:42 by vklaouse          #+#    #+#             */
/*   Updated: 2016/04/23 02:00:15 by vklaouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_vector_set(t_vector *v, size_t i, void *e)
{
	if (i >= v->total)
		return (NULL);
	v->data[i] = e;
	return (v);
}
