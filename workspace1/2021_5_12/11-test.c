#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(){
  String str = "He\0llo"; //"\0"以降の文字は表示されなくなる
  printf("%s", str);
  printf("%s", &str[0]);
}