/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:25:54 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/12 11:43:59 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	chk_atoi_psw(const char *str)
{
	int			c;
	int			s;
	long int	res;

	c = 0;
	s = 1;
	res = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		if (res * s < -2147483648)
			chk_errormsg();
		if (res * s > 2147483647)
			chk_errormsg();
		c++;
	}
	return (res * s);
}

int	chk_com_num_checker(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (((str[i] != '-') && (str[i] != '+') && (str[i] != ' '))
			&& ((str[i] < '0') || (str[i] > '9')))
			return (1);
		if ((str[i] == '-') || (str[i] == '+'))
		{
			if (i == 0)
			{
				if ((str[i + 1] < '0') || (str[i + 1] > '9'))
					return (1);
			}
			else
			{
				if (((str[i + 1] < '0') || (str[i + 1] > '9'))
					|| (str[i - 1] != ' '))
					return (1);
			}
		}
	}
	return (0);
}

int	chk_num_checker(char *str)
{
	int	i;

	if (str[0] == '-' || str[0] == '+')
	{
		if (ft_strlen(str) == 1)
			return (1);
		i = 1;
		while (str[i] != '\0')
		{
			if (str[i] < '0' || str[i] > '9')
				return (1);
			i++;
		}
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	chk_alr_ord(t_list	**sta)
{
	t_list	*temp1;
	t_list	*temp2;

	if (*sta == NULL)
		return (0);
	temp1 = *sta;
	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		while (temp2 != NULL)
		{
			if ((int)temp2->content < (int)temp1->content)
				return (0);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return (1);
}

int	chk_rep_nums(t_list	**sta)
{
	t_list	*temp1;
	t_list	*temp2;

	if (*sta == NULL)
		return (0);
	temp1 = *sta;
	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		while (temp2 != NULL)
		{
			if ((int)temp2->content == (int)temp1->content)
				return (1);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return (0);
}
