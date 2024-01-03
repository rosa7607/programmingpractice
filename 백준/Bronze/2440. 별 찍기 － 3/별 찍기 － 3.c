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

  int i = 0;
  int j = 0;
  int N = 0;

  scanf("%d", &N);

  for(i = N; i > 0; i--){
    
    for(j = 1; j <= i; j++){
      printf("*");
    }
    
    printf("\n");
  }

  return 0;
}
