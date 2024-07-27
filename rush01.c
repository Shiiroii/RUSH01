/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:50:23 by liulm             #+#    #+#             */
/*   Updated: 2024/07/27 12:22:06 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	rush01(char *str)
{
	int		i;
	int		num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			num++;
		i++;
	}
	printf("%d", num);
	if (num == 16)
		tab4(str);
	else if (num == 20)
		tab5(str);
	else if (num == 24)
		tab6(str);
	else if (num == 28)
		tab7(str);
	else if (num == 32)
		tab8(str);
	else if (num == 36)
		tab9(str);
	else
		write(1, "Error\n", 6);
}
