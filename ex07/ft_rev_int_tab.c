/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 06:15:57 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/11 10:12:45 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;

	if (size <= 1)
		return ;
	temp = *tab;
	*tab = *(tab + size - 1);
	*(tab + size - 1) = temp;
	return (ft_rev_int_tab(tab + 1, size - 2));
}
