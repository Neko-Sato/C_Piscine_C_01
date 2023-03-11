/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 07:02:54 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/11 10:12:23 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i[2];

	i[0] = 0;
	while (i[0] < size - 1)
	{
		i[1] = i[0] + 1;
		while (i[1] > 0)
		{
			if (*(tab + i[1] - 1) > *(tab + i[1]))
				swap(tab + i[1] - 1, tab + i[1]);
			else
				break ;
			i[1]--;
		}
		i[0]++;
	}
}
