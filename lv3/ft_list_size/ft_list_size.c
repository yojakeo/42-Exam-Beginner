int	ft_list_size(t_list *begin_list)
{
	int	count = 0;
	while (begin_list->next)
		++count;
	return (count);
}
