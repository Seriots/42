#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *ptr;
    t_list  *next;

    if (!lst || !del)
        return ;
    ptr = *lst;
    while(*lst)
    {
        ptr = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = ptr;
    }
    *lst = 0;
}