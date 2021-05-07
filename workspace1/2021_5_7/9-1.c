#include <stdio.h>
#include <stdlib.h>
void printIntByAddress(int* x){
  printf("%d\n", *x);
};
int main(){
  int num = 1;
  printIntByAddress(&num);
  return 0;
}