#include <stdio.h>
#include <stdbool.h>

int main(void){
  printf("いただきます\nバナナを食べます\n");
  bool more = false;
  if(more){
    printf("おかわりをください\n");
  }else{
    printf("お腹いっぱいです\n");
  }
  printf("ごちそうさまです\n");
}