#include <stdio.h>
#include "fahrenheit.h"
#include "kelvin.h"

int main(int argc, char **argv) {

  float t_celsius;
  
  if (argc!=2) {
    fprintf(stderr,
	    "usage: %s <temperature-in-celsius>\n",
	    argv[0]);
    exit(1);
  }

  sscanf(argv[1], "%f", &t_celsius);

  printf("Temperature:\n"
	 " In Celsius is %f\n"
	 " In Fahrenheit is %f\n"
	 " In Kelvin is %f\n",
	 t_celsius,
	 celsius2fahrenheit(t_celsius), 
	 celsius2kelvin(t_celsius));
	 
  return 0;
}
