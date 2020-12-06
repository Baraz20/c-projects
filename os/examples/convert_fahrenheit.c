#include <stdio.h>
#include "celsius.h"
#include "kelvin.h"

int main(int argc, char **argv) {

  float t_fahrenheit;
  
  if (argc!=2) {
    fprintf(stderr,
	    "usage: %s <temperature-in-fahrenheit>\n",
	    argv[0]);
    exit(1);
  }

  sscanf(argv[1], "%f", &t_fahrenheit);

  printf("Temperature:\n"
	 " In Celsius is %f\n"
	 " In Fahrenheit is %f\n"
	 " In Kelvin is %f\n",
	 fahrenheit2celsius(t_fahrenheit),
	 t_fahrenheit,
	 fahrenheit2kelvin(t_fahrenheit));
	 
  return 0;
}
