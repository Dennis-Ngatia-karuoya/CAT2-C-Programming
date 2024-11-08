#include <stdio.h> // Includes the standard input/output library for functions like printf.

int main() {
    int i,j; // Declares integer variables 'i' and 'j' for loop counters.

  // Declares a 2x2 integer array 'scores' and initializes it with values.
  int scores[2][2] = {{65, 92},{84, 72}};
  // Declares a 2x2 integer array 'scores2' and initializes it with values.
  int scores2[2][2] = {{35, 70},{59, 67}};

  printf("Array 1:\n"); // Prints a label for the first array.
  // Iterates through the rows of 'scores' array.
  for (int i = 0; i < 2; i++) {
    // Iterates through the columns of 'scores' array.
    for (int j = 0; j < 2; j++) {
      // Prints the element at the current row 'i' and column 'j' of 'scores' array.
      printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
    }
  }
  printf("Array 2:\n"); // Prints a label for the second array.
  // Iterates through the rows of 'scores2' array.
  for (int i = 0; i < 2; i++) {
    // Iterates through the columns of 'scores2' array.
    for (int j = 0; j < 2; j++) {
      // Prints the element at the current row 'i' and column 'j' of 'scores2' array.
      printf("scores2[%d][%d]=%d\n",i,j,scores2[i][j]);
    }
 }

  return 0; // Returns 0 to indicate successful program execution.
}
