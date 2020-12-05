#include "kelvin.h"

float fahrenheit2kelvin(float t_fahr) {
  return (t_fahr-32.0)*(100.0/(212.0-32.0))+273.3;
}

float celsius2kelvin(float t_cels) {
  return t_cels+273.3;
}
