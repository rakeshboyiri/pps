#include<stdio.h>  
void main(){  
FILE *fp;  
char text[300];  
  
fp=fopen("puts.txt","r");  
printf("%s",fgets(text,200,fp));  
  
fclose(fp);  
}  

