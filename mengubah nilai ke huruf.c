#include<stdio.h>

#include<conio.h>



int tukar (int nilai);



int main(void)

{
printf("PROGRAM MENGHITUNG UPAH GAJI PER JAM SEORANG PEGAWAI\n");
printf("BY M Achmad Sahroni NIM 311620782\n");
printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");
    int nilai;

    printf("Masukan Niali Antara 1 sampai 4 = ");

    scanf("%d", &nilai);

    tukar (nilai);

    getch();

}



int tukar (int nilai)

{

    switch(nilai)

    {

        case4:

            printf("Nilai Huruf : A "); break;

        case3:

            printf("Nilai Huruf : B "); break;

        case2:

            printf("Nilai Huurf : C "); break;

        case1:

            printf("Nilai Huruf : D "); break;

    default:

        printf("Kesalahan Dalam Memasukan Angka");

    }

    return(nilai);

}

