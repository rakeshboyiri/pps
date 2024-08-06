#include<stdio.h>

void main() {
   FILE *f,*fp;
   char s;
  
   f=fopen("file.txt","w+");
   while((s=fgetc(f))!=EOF) {
      printf("%c",s);
   }
    fp=fopen("f5.txt","a");
    
 fputc('a',fp);

}
