#include<conio.h>
#include <stdio.h>

int main(void) 
{
  double num1, num2;
  char operation;

  printf("Enter the calculation \n (number1--operation--number2) \n");
  scanf("%lf %c %lf", &num1, &operation, &num2);

  double result;
  switch (operation)
   {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      printf("Error: Invalid operator\n");
      return 1;
  }

  printf("%.1lf %c %.1lf = %.1lf\n", num1, operation, num2, result);
  return 0;
}
