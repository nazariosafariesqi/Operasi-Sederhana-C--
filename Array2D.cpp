#include <stdio.h>

int main()
{
    // inisialisasi variabel array of integer dua dimensi(jumlah baris dan jumlah kolom)
    int matriks_A[4][3];
    int matriks_B[4][3];
    int hasil[4][3];

    // input elemen-elemen matriks A
    printf("Matriks A\n");
    for (int i = 0; i < 4; i++)
    {
       for (int j = 0; j < 3; j++)
       {
          printf("elemen[%d][%d]: ", i, j);
          scanf("%d", &matriks_A [i][j]);
       }
    }

    // input elemen-elemen matriks B
    printf("Matriks B\n");
    for (int i = 0; i < 4; i++)
    {
       for (int j = 0; j < 3; j++)
       {
          printf("elemen[%d][%d]: ", i, j);
          scanf("%d", &matriks_B[i][j]);
       }
    }

    // jumlahkan nilai pada elemen matriks A dan B yang mempunyai baris dan kolom yang sama
    for (int i = 0; i < 4; i++)
    {
       for (int j = 0; j < 3; j++)
       {
          hasil[i][j] = matriks_A[i][j] + matriks_B[i][j];
       }
    }

    printf("Hasil penjumlahan:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n\n");
    }

    // kurangkan nilai pada elemen matriks A dan B yang mempunyai baris dan kolom yang sama
    for (int i = 0; i < 4; i++)
    {
       for (int j = 0; j < 3; j++)
       {
          hasil[i][j] = matriks_A[i][j] - matriks_B[i][j];
       }
    }

    printf("Hasil pengurangan:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
