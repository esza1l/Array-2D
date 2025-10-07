#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int baris, kolom;
    int i, j;

   
    printf("masukkan jumlah baris: ");
    scanf("%d", &baris);
    printf("masukkan jumlah kolom: ");
    scanf("%d", &kolom);

    int A[10][10], B[10][10], C[10][10], D[10][10];

  
    printf("\nmasukkan elemen-elemen matriks A:\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("\nmasukkan elemen-elemen matriks B:\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            C[i][j] = A[i][j] + B[i][j]; 
            D[i][j] = A[i][j] - B[i][j]; 
        }
    }

    
    printf("\nhasil penjumlahan matriks (A + B):\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

   
    printf("\nhasil pengurangan matriks (A - B):\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("%d\t", D[i][j]);
        }
        printf("\n");
    }

    return 0;
}

