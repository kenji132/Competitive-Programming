#include <stdio.h>
#include <stdlib.h>

int main(){
  char primary[3] = {'R','G','B'};
  double averages[30];
  int table[9][9];

  int scores[5] = {88, 61, 90, 75, 93};
  int total = 0;
  int max = 0;
  int min = 100;
  for(int i = 0; i < 5; i++){
    total += scores[i];
    if(min > scores[i]){
      min = scores[i];
    }
    if(max < scores[i]){
      max = scores[i];
    }
  }
  double avg = (double)total/5;
  printf("最大値: %d\n最小値: %d\n平均値: %.2f\n", max, min, avg);

  typedef struct{
    int code;
    char character;
  }Ascii;

  Ascii characters[26];
  for(int i = 0; i < 26; i++){
    characters[i].code = i + 1;
    characters[i].character = i + 65;
    printf("%d %c\n", characters[i].code, characters[i].character);
  }
  return 0;
}