#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *first;
    t_list  *next;

    if (!lst || !f || !del)
        return (0);
    if (!(first = ft_lstnew(f(lst->content))))
    {
        ft_lstclear(&first, del);
        return (NULL);
    }
    next = first->next;
    while(lst->next)
    {
        lst = lst->next;
        if (!(next = ft_lstnew(f(lst->content))))
        {
            ft_lstclear(&first, del);
            return (NULL);
        }
        ft_lstadd_back(&first, next);
    }
    return (first);
}