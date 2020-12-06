#include "celsius.h"

float fahrenheit2celsius(float t_fahr) {
  return (t_fahr-32.0)*(100.0/(212.0-32.0));
}

float kelvin2celsius(float t_cels) {
  return t_cels-273.3;
}
