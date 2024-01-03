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

  int i;
  int X;
  int A;
  int B;

  scanf("%d", &X);

  for(i = 0; i < X; i++){
    
    scanf("%d %d", &A, &B);
    
    printf("Case #%d: %d + %d = %d\n", i+1,A,B,A+B);
  }
  
  return 0;
}
