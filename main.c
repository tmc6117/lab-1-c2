#include <stdio.h>
#include <readline/readline.h>
#include <stdio.h>

int main(void) {
  double temp = atof(readline("Enter temperature in celsius: "));
 
  printf("%f° in Celsius is equicalent to %f° Fahrenheit\n",temp,(temp * 9/5 +32));

  return 0;
}