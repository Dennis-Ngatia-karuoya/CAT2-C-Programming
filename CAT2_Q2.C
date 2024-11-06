  
#include <stdio.h>

int main() {
    int i,j;
  int scores[2][2] = {{65, 92}, {84, 72}};
  int scores2[2][2] = {{35, 70}, {59, 67}};

  printf("Array 1:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
    }
  }
  printf("Array 2:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("scores2[%d][%d]=%d\n",i,j,scores2[i][j]);
    }
 }

  return 0;
}
