#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char String[1024];

int iscanf(void){
  String input;
  scanf("%s", input);
  int x = atoi(input);
  return x;
}

int calcPayment(int total_pay, int num){
  double dnum = (double)total_pay/num;
  int p = (int)(dnum/100)*100; //切り捨て
  if(dnum > p){
    p += 100;
  }
  return p;
}

void showPayment(int pay, int payorg, int people){
  printf("***支払額***\n");
  printf("１人あたり%d円(%d人)、幹事は%d円です。\n", pay, people-1, payorg);
}

int main(void){
  int amount,people,pay,payorg;

  printf("支払総額を入力してください:");
  amount = iscanf();

  printf("参加人数を入力してください:");
  people = iscanf();

  pay = calcPayment(amount, people);

  payorg = amount - pay * (people - 1);
  showPayment(pay, payorg, people);
  return 0;
}