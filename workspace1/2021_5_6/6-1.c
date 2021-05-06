#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char String[1024];

int main(){
  struct BOOK{
    String title;
    String author;
    String publisher;
    int price;
    int pages;
  };
  struct BOOK text = {"daily", "Kenji", "ダイヤモンド社", 100, 300};
  struct BOOK dictionary = {"daily2", "Kenji", "ダイヤモンド2社", 5000, 600};

  typedef struct{
    String name;
    String phone;
  }BizCard;

  typedef struct{
    String title;
    String from;
    String datetime;
    int size;
    bool attached;
    String body;
  }Mail;
  Mail m = {
    "あけましておめでとう",
    "sugawara@miyabilink.jp",
    "2021/05/06 10:45:39",
    302,
    false,
  };

  printf("%sさんから、%sにメールです。サイズは%dKB、添付は%s\n", m.from, m.datetime, m.size, m.attached ? "あり" : "無し");
  return 0;
}