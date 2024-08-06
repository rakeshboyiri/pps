/*
    
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Check if the correct number of arguments are given
  if (argc != 12) {
    printf("Usage: %s <filename> <int1> <int2> ... <int10>\n", argv[0]);
    return 1;
  }

  // Open the file for writing in binary mode
  FILE *fp;
  fp = fopen(argv[1], "wb");
  if (fp == NULL) {
    printf("Error: could not open file for writing.\n");
    return 1;
  }

  // Convert the input integers from string to integer format
  int values[10];
  for (int i = 2; i < argc; i++) {
    values[i-2] = atoi(argv[i]);
  }

  // Write the integers to the file
  fwrite(values, sizeof(int), 10, fp);

  // Close the file
  fclose(fp);

  return 0;
}
