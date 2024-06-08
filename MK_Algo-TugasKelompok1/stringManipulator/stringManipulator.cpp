//
// Created by Yosia on 08/06/24.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    // Swap characters until start < end
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int stringManipulator() {
    char kalimat1[100], kalimat2[100], kalimat3[100], sentence[100];

    printf("Kalimat 1 = ");
    fgets(kalimat1, sizeof(kalimat1), stdin);
    kalimat1[strcspn(kalimat1, "\n")] = 0;

    printf("Kalimat 2 = ");
    fgets(kalimat2, sizeof(kalimat2), stdin);
    kalimat2[strcspn(kalimat2, "\n")] = 0;

    printf("Kalimat 3 = ");
    fgets(kalimat3, sizeof(kalimat3), stdin);
    kalimat3[strcspn(kalimat3, "\n")] = 0;

    // Combining the strings into a single variable
    sprintf(sentence, "%s %s %s", kalimat1, kalimat2, kalimat3);

    printf("Gabungan 3 buah inputan kalimat = %s \n", sentence);

    // Reverse each individual word
    reverseString(kalimat1);
    reverseString(kalimat2);
    reverseString(kalimat3);

    // Combine reversed words
    printf("Kalimat setelah dibalik = %s %s %s\n", kalimat3, kalimat2, kalimat1);

    int jumlah1 = strlen(kalimat1);
    int jumlah2 = strlen(kalimat2);
    int jumlah3 = strlen(kalimat3);
    int total = jumlah1 + jumlah2 + jumlah3;

    printf("Jumlah Huruf kalimat Pertama = %d\n", jumlah1);
    printf("Jumlah Huruf kalimat kedua = %d\n", jumlah2);
    printf("Jumlah Huruf kalimat ketiga = %d\n", jumlah3);
    printf("Total Jumlah huruf = %d\n", total);

    return 0;
}