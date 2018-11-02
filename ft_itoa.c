/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <begruget@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 16:42:25 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/23 20:13:59 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_int(int n)
{
	int len;

	len = 0;
	if (n < 0)
		len = 1;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		nb;

	nb = n;
	len = ft_len_int(nb);
	if (!(str = (char *)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	if (n < 0)
		str[0] = '-';
	str[0] = (n == 0) ? '0' : str[0];
	str[len] = '\0';
	while (n != 0)
	{
		str[--len] = (ft_abs(n % 10)) + '0';
		n = n / 10;
	}
	return (str);
}
