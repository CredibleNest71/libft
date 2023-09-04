#include<unistd.h>

void *ft_memset(void *s, int c, unsigned int n);
void *ft_memcpy(void *dest, const void *src, unsigned int n);
/* MEMSET
int main()
{
    char test[] = "17 ist keine Zahl";
    ft_memset(test, 'r', 6);
    write(1, &test, 10);
}
*/
int main()
{
    char test[] = "17 ist keine Zahl";
    char test2[] = "dochdochdoch";
    ft_memcpy(test, test2, 6);
    write(1, &test, 10);
}