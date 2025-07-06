#include "ft_printf.h"
#include <stdio.h>  // karşılaştırma için

int main(void)
{
    int int_val = -42;
    unsigned int uint_val = 4294967295;
    char *str = "Selam Saadet!";
    char ch = 'A';
    int *ptr = &int_val;

    // %c - karakter
    ft_printf("ft_printf - Karakter: %c\n", ch);
    printf("printf     - Karakter: %c\n\n", ch);

    // %s - string
    ft_printf("ft_printf - String: %s\n", str);
    printf("printf     - String: %s\n\n", str);

    // %d - signed integer
    ft_printf("ft_printf - Signed int: %d\n", int_val);
    printf("printf     - Signed int: %d\n\n", int_val);

    // %u - unsigned integer
    ft_printf("ft_printf - Unsigned int: %u\n", uint_val);
    printf("printf     - Unsigned int: %u\n\n", uint_val);

    // %x - hexadecimal küçük harf
    ft_printf("ft_printf - Hexadecimal (küçük): %x\n", uint_val);
    printf("printf     - Hexadecimal (küçük): %x\n\n", uint_val);

    // %X - hexadecimal büyük harf
    ft_printf("ft_printf - Hexadecimal (büyük): %X\n", uint_val);
    printf("printf     - Hexadecimal (büyük): %X\n\n", uint_val);

    // %p - pointer adresi
    ft_printf("ft_printf - Pointer: %p\n", ptr);
    printf("printf     - Pointer: %p\n\n", ptr);

    // %% - yüzde işareti
    ft_printf("ft_printf - Yüzde işareti: %%\n");
    printf("printf     - Yüzde işareti: %%\n");

    return 0;
}
