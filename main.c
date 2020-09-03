#include <stdio.h>
#include <readline/readline.h>
#include <stdio.h>

int main(void) {
  char *temp = readline("Enter temperature in celsius: ");
  double celsius, fahrenheit;
  celsius = atof(temp);
  fahrenheit = (celsius*9/5)+32;
  printf("%f° in Celsius is equicalent to %f° Fahrenheit\n",celsius, fahrenheit);
  return 0;
}