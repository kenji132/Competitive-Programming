#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double calcCircleArea(double x){
  double s;
  s = x*x*3.14;
  return s;
}

bool isLeapYear(int year){
  if(year%400 == 0){
    return true;
  }else if(year%100 == 0){
    return false;
  }else if(year%4 == 0){
    return true;
  }else{
    return false;
  }
}

int main(void){
  int y;
  scanf("%d",&y);
  if(isLeapYear(y)){
    printf("%d年は、うるう年です。\n",y);
  }else{
    printf("%d年は、うるう年ではありません。\n",y);
  }
  return 0;
}

