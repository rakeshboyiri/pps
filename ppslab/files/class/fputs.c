#include<stdio.h>  
int main(){  
FILE *fp;  
fp=fopen("puts.txt","w");  
fputs("hello ,welcome to rgukt",fp);  
printf("content written into the file using fputs");
fclose(fp);
return 0;  
}  

