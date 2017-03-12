/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vm_verif_i_code.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 14:50:53 by gnebie            #+#    #+#             */
/*   Updated: 2017/03/12 14:50:54 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

/*
** 1 = reg, 2 = dir, 4 = ind; 3 = reg || dir 5 = ind || reg 6 = dir || ind; 7 = any
*/

int			vm_verif_i_code(char code, char a, char b, char c)
{
	if (code & 0b11)
		return (0);
	code >>= 2;
	if (((c & 1) != (code & 3)) && ((c & 2) != (code & 3)) && ((c & 4) && code != 3))
		return (0);
	code >>= 2;
	if (((b & 1) != (code & 3)) && ((b & 2) != (code & 3)) && ((b & 4) && code != 3))
		return (0);
	code >>= 2;
	if (((a & 1) != (code & 3)) && ((a & 2) != (code & 3)) && ((a & 4) && code != 3))
		return (0);
	return (1);
}
