#include "fahrenheit.h"

float celsius2fahrenheit(float t_cels) {
  return t_cels*((212.0-32.0)/100.0)+32.0;
}

float kelvin2fahrenheit(float t_kelv) {
  return celsius2fahrenheit(t_kelv-273.3);
}
