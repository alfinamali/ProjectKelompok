#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sisi,tinggi,hasil_L;
    float S_miring,S_Tiga;

    printf("Luas Limas Segi Empat Beraturan\n\n");
    printf("Masukan Tinggi         : ");
    scanf("%f",&tinggi);
    printf("Masukan Panjang sisi   : ");
    scanf("%f",&sisi);

    puts("");

    S_Tiga=0.5*sisi*S_miring;

    hasil_L=(sisi*sisi)+(4*S_Tiga);

    printf("Luas Limas   = %.2f",hasil_L);

    puts("");
    return 0;
}
