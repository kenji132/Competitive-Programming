#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
  int ok  = false;
  printf("***数当てゲーム(レベル2)***\n３桁の数を当ててください!\n");
  // int answer[3];
  int answer[3] = {1,2,3};
  int input[3];
  // srand((unsigned)time(NULL));
  // for(int i = 0; i < 3; i++){
  //   int x = rand() % 3;
  //   answer[i] = x;
  // }
  do{
  for(int i = 0; i < 3; i++){
    printf("%d桁目の予想を0~9の数字で入力してください:", i+1);
    int ans;
    scanf("%d", &ans);
    input[i] = ans;
  }
  int cnt1 = 0;
  int cnt2 = 0;
  for(int i = 0; i < 3; i++){
    if(answer[i] == input[i]){
      cnt1++;
    }
    for(int j = 0; j < 3; j++){
      if(answer[i] == input[j]){
        cnt2++;
      }
    }
  }
  printf("%dヒット！ %dブロー！", cnt1, cnt2);
  if(cnt1 == 3){
    printf("正解です!!\n");
    return 0;
  }else{
    printf("1:続ける 0:終了\n");
    scanf("%d", &ok);
  }
  }while(ok);

}