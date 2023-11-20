
#include <stdio.h>

void printArray(int a[][3] ){
  for (size_t i = 0; i <= 1; ++i) {   //increments 0-1 to go through the two rows in each list
     for (size_t j = 0; j <= 2; ++j) { //increments 0-2 to go through each column (the items in each sublist)
        printf("%d ", a[i][j]);
     }
     printf("\n"); // start new line of output 
     }
}

int main() {
  int array1[2][3] = {{1, 2, 3}, {4, 5, 6}}; //each list has two rows and three columns
  printf("Values in array1 by row are:\n");
  printArray(array1);

  int array2[2][3] = {1, 2, 3, 4, 5}; // puts items in order in 2d array, adds 0 if the numbers don't match exactly
  printf("Values in array2 by row are:\n");
  printArray(array2);


  int array3[2][3] = {{1, 2}, {4}};
  printf("Values in array3 by row are:\n");
  printArray(array3);
  
  return 0;
}
