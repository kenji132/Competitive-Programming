#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef char String[1024];

int main(){
  char a[] = {49, 50, 51, 52, 53, 0};
  char b[] = "12345";
  int alen = strlen(a);
  int blen = strlen(b);
  printf("a: %d  b: %d\n", alen, blen);
  if(strcmp(a, b) == 0){
    printf("文字列は等しい\n");
  }
  int clen = alen + blen+1;
  char* c = (char*)malloc(clen);
  strcpy(c,a);
  strcat(c,b);

  free(c);
  return 0;
}