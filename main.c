#include <stdio.h>
#include <stdlib.h>

float Vin = 0.0,
      Vled = 0.0,
      Iled = 0.0,
      R = 0.0;

int main(int argc, char *argv[])
{

    printf("LED CALC   v1.0 \n\n");
    printf("Author: L Mendes \n\n");

    printf("Type the Vin value (in Volts):");
    scanf("%f", &Vin);

    printf("Type the Vled value (in Volts):");
    scanf("%f", &Vled);
    
    printf("Type the Iled values (in Amps):");
    scanf("%f", &Iled);

    printf("\n\n");

    R = (Vin-Vled)/Iled;

    printf("Vin = %.2f\n\n", Vin);
    printf("Vled = %.2f\n\n", Vled);
    printf("Iled = %.2f\n\n", Iled);
    printf("\n\n");
    printf("The LED resistor demands a value of %.2f Ohms\n\n", R);  
}