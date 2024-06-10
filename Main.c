#include <stdio.h>

int main()
{
    char str[512];
    char* s_str = &str;
    printf_s("Enter directory: ");
    fgets(s_str, sizeof(s_str), stdin);
    printf_s("%s", s_str);

    int ch;
    FILE* fp;
    fopen_s(&fp, "ex.txt", "r");
    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
}