#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,s;
    float v;
    printf("\tMenghitung Volume Limas Segi Empat Beraturan\n\n");
    printf("Masukkan tinggi (cm) : ");
    scanf("%d", &t);
    printf("Masukkan panjang sisi (cm): ");
    scanf("%d", &s);
    v=(0.33333)*(s*s)*t;
    printf("Volume Limas : %f cm3\n", v);
}
