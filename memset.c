#include <stdio.h>
unsigned char name[50] = "Khaled Habib";
void *kh_memset(void *str, char c, unsigned int n);
int main(void)
{
    printf("%s\n",name);
    kh_memset(&name[0],'*',6);
    printf("%s\n",name);
    return 0;
}

void *kh_memset(void *str, char c, unsigned int n)
{
    unsigned char *Temp = str;

    if (NULL == str) // validate the pointer before using it
    {
        printf("memset function failed to operate -> NULL pointer\n"); // error message
    }
    else
    {
        while (n--)
        {
            *Temp++ = c;
        }
    }

    return str;
}
