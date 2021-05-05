#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  printf("***数当てゲーム(レベル1)***\n回答のチャンスは４回までです\n１桁の数字を入力してください: ");
  srand((unsigned)time(NULL));
  const int ans = rand() % 10;
  // const int ans = 5;
  int x;
  for(int i = 1; i < 5; i++){
    scanf("%d",&x);
    if(x == ans){
      printf("%d回目で正解\n", i);
      return 0;
      break;
    }else if(x > ans){
      printf("答えは入力した値よりも小さいです\n");
    }else if(x < ans){
      printf("答えは入力した値よりも大きいです\n");
    }
  }
  printf("正解は%dです\n", ans);
  return 0;
}