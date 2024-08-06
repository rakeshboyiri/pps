#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("f1.txt", "r");
    fp2 = fopen("xyz.txt", "w+");
    while((ch = fgetc(fp1)) != EOF)
        putc(ch, fp2);
    printf("content copied successfully");
    fclose(fp1);
    fclose(fp2);
    }
