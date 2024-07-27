/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:48:11 by liulm             #+#    #+#             */
/*   Updated: 2024/07/27 16:13:54 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H
# include <unistd.h>
# include <stdio.h>

// ---------------- UTILS -----------------

void	ft_putchar(char c);
void	ft_putnbr(int nb);

// ----------------- TABS ------------------

void	tab4(char *str);
void	tab5(char *str);
void	tab6(char *str);
void	tab7(char *str);
void	tab8(char *str);
void	tab9(char *str);

// ----------------- RUSH ------------------

void	rush01(char *str);
void	variables_init(char *str);

// ----------------------------------------

#endif
