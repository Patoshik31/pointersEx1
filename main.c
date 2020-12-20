#include <stdio.h>
#include <string.h>

void printString(char *str);

int main()
{
    char str1[][10] = {"abcde", "fghijl", "12345678", "123"};
    unsigned char i = 0;
    
    while( i < ((int)sizeof(str1) / (int)sizeof(*str1)) )
    {
        printString(*(str1+i));
        i++;
        printf("\n");
    }
	
	return 0;
}

void printString(char *str)
{
    while(*str != '\0')
    {
        putchar(*str);
        str++;
    }
    putchar('\0');
}