#include <stdio.h>
int main() {
  int x, sum = 0, count = 0;
  do {
  scanf("%d", &x);
  int t = x;
  while(count <= 5) {
  if (t % 2 == 0) {
  sum = sum + t;
  count++;
  }
  t++;
  }
  printf("%d\n", sum);
  }
  while (x > 0);
  
  return 0;
}