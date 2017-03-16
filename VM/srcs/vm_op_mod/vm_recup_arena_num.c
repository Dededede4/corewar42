/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vm_recup_arena_num.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 14:49:28 by gnebie            #+#    #+#             */
/*   Updated: 2017/03/14 13:08:36 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

int			vm_recup_arena_num(int size, char *arene, int PC)
{
	int		i;
	unsigned int		res;

	i = 0;
	res = 0;
	while (i < size)
	{
		res <<= 8;
		res |= (char)arene[(PC + i) % MEM_SIZE];
		i++;
//			mvprintw(NC_DEBUG_Y + 22 + i, ft_gcd(MEM_SIZE) * 3 + 10/*NC_DEBUG_X*/, "else result = %d", res);
	}
//		mvprintw(NC_DEBUG_Y + 20, ft_gcd(MEM_SIZE) * 3 + 10/*NC_DEBUG_X*/, "else result = %d size = %d, pc  %d, %d, memsize %d", res,size,PC ,(size & 7), MEM_SIZE);
	return (res);
}
