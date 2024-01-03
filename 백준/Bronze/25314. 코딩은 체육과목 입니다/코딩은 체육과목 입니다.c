#include <stdio.h>

/*
break 문 : 가장 가까운 반복문을 탈출함
continue문 : 이번 반복을 탈출함
이중for문 : 
*/

/*
while 문  - while(조건식){명령어}
do-while  - do{명령어} while(조건문);
*/

int main(void) {

  int N;
  scanf("%d", &N);
  for(int i = 0; i < N/4; i++){
    printf("long ");
  }
  printf("int");
  
  return 0;
}
