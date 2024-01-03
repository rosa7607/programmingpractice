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

  int A = 1;
  int B = 1;

  while (1) {
    scanf("%d %d" , &A, &B);
    if ( A == 0 && B == 0)
      break;

    printf("%d\n" , A + B);
  }
  
  
  return 0;
}
