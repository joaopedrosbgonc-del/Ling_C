#include <stdio.h>

int main(){
    float pe, jarda, milha, pol;

    printf("Quantos pes de distancia?\n--> ");
    scanf("%f", &pe);

    jarda = pe /3 ;
    milha = jarda / 1760;
    pol = pe * 12;

    printf("%.0f pes equivalem a: \n%.1f Jardas;\n%.1f Milhas;\n%.1f Polegadas", pe, jarda, milha, pol);
}