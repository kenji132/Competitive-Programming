#include <stdio.h>
#include <stdlib.h>

int main(void){
  int x = 3000;
  int apple = 120;
  int orange = 400;
  int a_cnt = 0;
  int o_cnt = 0;
  int a_x = x;
  int o_x = x;
  while(a_x >= 120){
    a_x-=apple;
    a_cnt++;
  }
  while(o_x >= 400){
    o_x-=orange;
    o_cnt++;
  }
  printf("リンゴ  %d  余りは%d円", a_cnt, a_x);
  printf("ミカン  %d  余りは%d円", o_cnt, o_x);
}