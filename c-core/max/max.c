int max(int *tab, unsigned int len)
{
	if (len == 0)
	return (0);
	if (len == 1)
    return (tab[0]);
	unsigned int i;
	int res;

	i = 0;
	res = 0;
	len -= 1;
	while (i <= len)
	{
		if (tab[i] > tab[len])
		res = tab[i];
		i++;
	}
	return (res);
}
