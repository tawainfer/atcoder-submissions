#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  
  if(n % 4 != 0) printf("First");
  else printf("Second");
  return 0;
}