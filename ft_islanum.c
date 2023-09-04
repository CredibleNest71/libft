int ft_isalnum(int c)
{
    if (!(c >= 'a' && c <= 'z'))
        if (!(c >= 'A' && c <= 'Z'))
            if (!(c >= '0' && c <= '9'))
                return (0);
    return (1);
}