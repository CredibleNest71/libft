void *ft_memset(void *s, int c, unsigned int n)
{
    unsigned int i;
    i = 0;

    char *p = s;

    while (i < n)
    {
        p[i] = c;
        i++;
    }
    return (s);
}