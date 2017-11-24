#include <stdio.h>

int main() {
  char name[50];
  char width[5];
  char height[5];
  char favorite_animal[50];

  printf("Please enter your name: ");
  scanf("%s", &name);
  printf("Please enter the width of your matrix: ");
  scanf("%s", &width);
  printf("Please enter the height of your matrix: ");
  scanf("%s", &height);
  printf("Your name is: %s\n", name);
  printf("Your width of the matrix is: %s\n", width);
  printf("Your height of the matrix is: %s\n\n", height);


  return 0;
}
