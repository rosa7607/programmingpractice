#include <stdio.h>


/*
조건문(심화)
* 10 이상, 20 미만인 수에 대해서 검사하는 조건문을 만들고 싶을때?
ㄴ 논리 연산자 : AND(&&), OR(||), NOT(!=)

반복문(기본) for(초기식; 조건식; 증감식){명령어}
*/
/*
break문 : 가장 가까운 반복문을 탈출함
continue문 : 이번 반복을 탈출함
이중for문 : 
*/

int main(void) {

  int i;
  int n;
  int j;

  scanf("%d", &n);

  for (i = 0; i < n; i++){
    for(j = n-i-1; j > 0; j--){
      printf(" ");
    }

    for(j = 0; j <= i; j++)
      printf("*");
    printf("\n");

    
  }



  
  return 0;
}