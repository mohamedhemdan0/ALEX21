#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 , n2 ;
    char op ;
    printf("Enter the operator");
  scanf("%c", &op);
  printf("Enter number 1:\n ");
  scanf("%d", &n1);
 printf("Enter number 2:\n ");
 scanf("%d", &n2);
  switch (op) {
    case '+':
      printf("%d + %d = %d", n1, n2, n1 + n2);
      break;
    case '-':
      printf("%d - %d = %d", n1, n2, n1 - n2);
      break;
    case '*':
      printf("%d * %d = %d", n1, n2, n1 * n2);
      break;
    case '/':
      printf("%d / %d = %d", n1, n2, n1 / n2);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;


}
