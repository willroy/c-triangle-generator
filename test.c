#include <stdio.h>

static int loop_str(char * print_text, int limit, int steps);

int main() {
  //Input of triangle size
  int size;
  printf("Enter A Size: ");
  scanf("%d", &size);
  //defines the amount of blocks and breaks depending on input
  int breaks = size;
  int blocks = 1;
  int a;
  while(breaks != 1) {
    loop_str(" ", breaks, 1);
    loop_str("X", blocks, 1);
    loop_str(" ", breaks, 1);
    printf("\n");
    breaks -= 1;
    blocks += 2;
  }
  printf("\nDONE\n");
  return 0;
}

//Loops a given string against a given number of times
int loop_str(char * print_text, int limit, int steps) {
  for( int a = 0; a < (limit+1); a += steps) {
    printf("%s", print_text);
  }
}
