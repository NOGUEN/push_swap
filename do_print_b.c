/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_print_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:47:36 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/20 14:54:10 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_print_sb(t_stack *stack)
{
	operate_swap(stack);
	write(1, "rb\n", 3);
}

void	do_print_pb(t_stack *b, t_stack *a)
{
	operate_push(b, a);
	write(1, "pb\n", 3);
}

void	do_print_rb(t_stack *stack)
{
	operate_rotate(stack);
	write(1, "rb\n", 3);
}

void	do_print_rrb(t_stack *stack)
{
	operate_reverse_rotate(stack);
	write(1, "rrb\n", 4);
}