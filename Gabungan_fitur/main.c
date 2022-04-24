#include <stdio.h>
#include <stdlib.h>
const float phi=3.14;
int main()
{
    int pil, a, b, c, d;
    float volum, luas;
    {
        printf ("+++ Pilihan Menu: +++\n");
        printf ("1) Luas Kubus\n");
        printf ("2) Bola\n");
        printf ("3) Prisma Segitiga\n");
        printf ("4) Limas segi empat\n");
        printf ("Silahkan masukkan angka pilihan anda: ");
        scanf("%d",&pil);
switch(pil)
    {
    case 1:
        printf("\n\nPerhitungan Luas Permukaan Kubus\n");
        printf("Panjang rusuk kubus = ");
        scanf("%d", &a);
        luas = a*a*6;
        printf("Luas permukaan Kubus = %0.f",luas );
        break;
    case 2:
        printf("\n\nLuas Permukaan Bola\n");
        printf("Panjang jari-jari bola = ");
        scanf("%d", &a);
        luas = 4 * phi * a * a;
        printf("Luas permukaan Bola = %0.f",luas);
        break;
    case 3:
       printf("\n\nMenghitung Luas Prisma Segitiga\n");
       printf("Masukkan Luas Alas Prisma : ");
       scanf("%d",&a);
       printf("Masukkan Keliling Alas Prisma : ");
       scanf("%d",&b);
       printf("Masukkan Tinggi Alas Prisma : ");
       scanf("%f",&c);
       luas = (2*a)+(b*c);
       printf("Luas Prisma Segitiga adalah = %0.f",luas);
        break;
    case 4:
        printf("\n\nPerhitungan Volume dan Luas Permukaan Limas Segi Empat\n");
        printf("Panjang alas limas = ");
        scanf("%d",&a);
        printf("Lebar alas limas = ");
        scanf("%d",&b);
        printf("Tinggi limas = ");
        scanf("%d",&c);
        volum = (a * b * c * 1/3);
        luas = ((a + b) * c) + (a * b);
        printf("Volume Limas Segi empat= %0.f",volum);
        printf("\nLuas permukaan Limas segi empat= %0.f",luas);
        break;
        default:printf("PILIHAN TIDAK ADA");

    }
return 0;
}
}
