/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <begruget@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/23 19:39:14 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/10 21:05:53 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, int content_size)
{
	t_list	*list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	if (!(content))
	{
		list->tmp = NULL;
		list->fd = content_size;
	}
	else
	{
		list->tmp = ft_strdup(content);
		list->fd = content_size;
	}
	list->next = NULL;
	return (list);
}
