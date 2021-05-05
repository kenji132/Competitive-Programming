#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char String[1024];

int main(void){
  int temp = 30;
  bool ok = true;
  int a;
  while(ok){
    printf("現在の設定温度: %d\n", temp);
    printf("暑いですか？Yes=1 No=0\n");
    scanf("%d", &a); //ポインタ？
    if(a == 1){
      temp--;
    }else{
      printf("設定を終了します\n");
      ok = false;
    }
  }
  return 0;
}