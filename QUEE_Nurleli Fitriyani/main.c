#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct mobilan{
    int no;
    char type[100];
    char warna[100];
};
typedef struct mobilan mobil;

struct Antrian
{
    mobil data;
    struct Antrian *berikutnya;
};
typedef struct Antrian que;

que *depan=NULL;
que *belakang=NULL;

void tambahElement();
int hapusElement();
void tampil();

int main()
{
    int ch, x;
    do
    {
        printf("\n\t\t\t Antrian menggunakan Linkedlist ");
        printf("\n\t\t\t -- -- --\n");
        printf("\n\t1. Tambah Element");
        printf("\n\t2. Hapus Element");
        printf("\n\t3. Tampil Element");
        printf("\n\t4. Keluar");
        printf("\n Masukkan  Pilihan Anda :");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            tambahElement();
            tampil();
            break;
        case 2:
            x= hapusElement();
            if(x != -1)
                printf("Nilai yang dihapus = %d\n", x);
            tampil();
            break;
        case 3:
            tampil();
            break;
        case 4:
            exit(0);
        default:
            printf("Pilihan tidak valid!!\n");
            break;
        }
    }while(ch!=4);
    getch();
}

void tambahElement()
{
    int nmr;
    char tipe[20], wrn[20];
    que *simpul;
    simpul=(que *)malloc(sizeof(que));
    fflush(stdin);
    printf("Masukkan No : ");
    scanf("%d", &nmr);
    fflush(stdin);
    printf("Masukkan Type : ");
    scanf("%s", &tipe);
    fflush(stdin);
    printf("Masukkan Warna : ");
    scanf("%s", &wrn);
    fflush(stdin);

    strcpy(simpul->data.type, tipe);
    strcpy(simpul->data.warna, wrn);
    simpul->data.no=nmr;
    simpul->berikutnya=NULL;

    if(depan==NULL)
        depan=simpul;
    else
        belakang->berikutnya=simpul;
    belakang=simpul;
}
int hapusElement()
{
    int nil;
    que *p;
    if(depan==NULL)
    {
        printf("List kosong. \n");
        nil=-1;
    }else
    {
        p=depan;
        depan=p->berikutnya;
        nil=p->data.no;

        if(depan==NULL)
            belakang=NULL;
        free(p);
    }
    return(nil);
}
void tampil()
{
    que *tmp;
    tmp=depan;
    printf("* Eleement di dalam Antrian *\n");
    if(tmp==NULL)
        printf("Antrian kosong");
    else
    {
        while(tmp->berikutnya != NULL)
        {
            printf("\n%d", tmp->data.no);
            printf(" %s", tmp->data.type);
             printf(" %s", tmp->data.warna);
            tmp=tmp->berikutnya;
        }
        printf("\n%d", tmp->data.no);
        printf(" %s", tmp->data.type);
        printf(" %s", tmp->data.warna);
    }
}
