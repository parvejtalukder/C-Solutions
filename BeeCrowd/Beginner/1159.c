#include <stdio.h>
<<<<<<< HEAD
// My CODE BY PHT
int main() {
    int x, count, sum, i;
    while (1) {
        scanf("%d", &x);
        if (x == 0)
            break;
        if (x % 2 != 0) {
            x++;  
        }
        sum = 0;
        for (count = 0; count < 5; count++) {
            sum += x;
            x += 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}
=======
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
>>>>>>> 526d7e5001d22427669004fdaab7182dfb0a1289
