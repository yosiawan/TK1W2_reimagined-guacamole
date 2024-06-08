//
// Created by Yosia on 08/06/24.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int stringManipulator() {
    char kalimat1[100], kalimat2[100], kalimat3[100];

    printf("Kalimat 1 = ");
    fgets(kalimat1, sizeof(kalimat1), stdin);
    kalimat1[strcspn(kalimat1, "\n")] = 0;


    printf("Kalimat 2 = ");
    fgets(kalimat2, sizeof(kalimat2), stdin);
    kalimat2[strcspn(kalimat2, "\n")] = 0;


    printf("Kalimat 3 = ");
    fgets(kalimat3, sizeof(kalimat3), stdin);
    kalimat3[strcspn(kalimat3, "\n")] = 0;

    int jumlah1 = 0, jumlah2 = 0, jumlah3 = 0;
    for (int i = 0; kalimat1[i] != '\0'; i++) {
        if (!isspace(kalimat1[i])) {
            jumlah1++;
        }
    }
    for (int i = 0; kalimat2[i] != '\0'; i++) {
        if (!isspace(kalimat2[i])) {
            jumlah2++;
        }
    }
    for (int i = 0; kalimat3[i] != '\0'; i++) {
        if (!isspace(kalimat3[i])) {
            jumlah3++;
        }
    }
    int total = jumlah1 + jumlah2 + jumlah3;

    printf("Jumlah Huruf kalimat kedua = %d\n", jumlah2);
    printf("Jumlah Huruf kalimat ketiga = %d\n", jumlah3);
    printf("Total Jumlah huruf = %d\n", total);

    return 0;
};