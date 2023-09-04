void    *ft_memcpy(void *dest, const void *src, unsigned int n)
{
    const char    *psrc;
    char    *pdest;
    int     i;

    psrc = src;
    pdest = dest;
    i = 0;

    while (i < n)
	{
		if (&dest[i] == src)
			break;
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}