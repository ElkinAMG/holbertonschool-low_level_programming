#include <stdio.h>
/**
 * main - this is the main function
 * Return: always return (0)
 */
int main(void){
  printf("Size of a char: %2d\n", sizeof(char));
  printf("Size of an int: %2d\n", sizeof(int));
  printf("Size of a long int: %2d\n", sizeof(long int));
  printf("Size of a long long int: %2d\n", sizeof(long int *));
  printf("Size of a float: %2d\n", sizeof(float));
  return 0;
}
