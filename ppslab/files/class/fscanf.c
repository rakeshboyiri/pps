#include<stdio.h> 
int main() 
{ 
    FILE* ptr = fopen("fscanf.txt","r"); 
    if (ptr==NULL) 
    { 
        printf("no such file."); 
        return 0; 
    } 
  
      
    char buf[400]; 
    while (fscanf(ptr,"%s",buf)!=EOF) 
        printf("%s\n", buf); 
  
    return 0; 
} 
