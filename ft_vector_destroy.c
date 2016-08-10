/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/23 01:48:06 by vklaouse          #+#    #+#             */
/*   Updated: 2016/04/23 01:59:57 by vklaouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vector_destroy(t_vector *v)
{
	ft_vector_clear(v);
	free(v->data);
	free(v);
}
