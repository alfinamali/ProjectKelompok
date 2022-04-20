#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, K, T;
    float LuasPrisma;
    printf("\t\t\t=== Menghitung Luas Prisma Segitiga ===\n\n");
    printf("\t\t----------------------------------------------------\n");
    printf("\t\tMasukkan Luas Alas Prisma : ");
    scanf("%f",&A);
    printf("\t\tMasukkan Keliling Alas Prisma : ");
    scanf("%f",&K);
    printf("\t\tMasukkan Tinggi Alas Prisma : ");
    scanf("%f",&T);
    LuasPrisma = (2*A)+(K*T);
    printf("\t\tHasil Luas Prisma Segitiga adalah = %0.f",LuasPrisma);

}
