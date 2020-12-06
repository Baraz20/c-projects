#include <stdio.h>
#include "fahrenheit.h"
#include "celsius.h"

int main(int argc, char **argv) {

  float t_kelvin;
  
  if (argc!=2) {
    fprintf(stderr,
	    "usage: %s <temperature-in-kelvin>\n",
	    argv[0]);
    exit(1);
  }

  sscanf(argv[1], "%f", &t_kelvin);

  printf("Temperature:\n"
	 " In Celsius is %f\n"
	 " In Fahrenheit is %f\n"
	 " In Kelvin is %f\n",
	 kelvin2celsius(t_kelvin),
	 kelvin2fahrenheit(t_kelvin), 
	 t_kelvin);
	 
  return 0;
}
