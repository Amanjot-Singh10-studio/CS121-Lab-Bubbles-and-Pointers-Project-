#include <stdio.h>
const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} 
void printValues(int *values) {
	int i; 
	printf("[ ");	
	for (i = 0; i < MAX; i++) {
		printf("%d ", values[i]); 
	} 
	printf("]\n"); 
}

void sort(int *array) {
    int i, j;
    for(i = 0; i < MAX - 1; i++)
        for(j = 0; j < MAX - i - 1; j++)
            if(array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                printValues(array);
            }
}

void swap(int *a, int *b) {
	int temp; 
	temp = *a; 
	*a = *b; 
	*b = temp; 
} 
