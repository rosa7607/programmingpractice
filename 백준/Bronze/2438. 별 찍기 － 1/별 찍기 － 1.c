#include <stdio.h>

int main(void) {

  int i;
  int a;
  int n;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    for(a=0; a<i+1; a++){
      printf("*");
    }
    
     printf("\n");
  }
  return 0;
}