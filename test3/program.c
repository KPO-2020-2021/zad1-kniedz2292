#include <stdio.h>
#include "modul.c" //nalezalo dodac plik modul.c

extern const double PI;
extern const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
