#include <stdio.h> 
unsigned char name_one[30] = "Khaled Habib";
unsigned char name_two[30] = "El-Sayed Abou Gomaa";
void *kh_memcpy(void *dest_str, const void * src_str, size_t n);
int main(void)
{
    printf("%s\n",name_two);
    kh_memcpy(name_two,name_one,12);
    printf("%s\n",name_two);
    return 0;
}

void *kh_memcpy(void *dest_str, const void *src_str, size_t n)
{
    unsigned char *Temp_dest = dest_str;
    unsigned char *Temp_src = src_str;
    if ((NULL == dest_str) || (NULL == src_str))
    {
        printf("memCpy function failed to operate -> NULL pointer\n"); // error message
    }
    else 
    {
        while(n--)
        {
            *Temp_dest++ = *Temp_src++;
        }
    }

    return dest_str;
}