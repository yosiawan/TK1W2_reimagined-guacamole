
#include <cstdio>
#include <iostream>

#include "MK_Algo-TugasKelompok1/convertSeconds/convertSeconds.h"
#include "MK_Algo-TugasKelompok1/stringManipulator/stringManipulator.h"

int main() {

     int soalYangInginDijalankan;
     printf("Pilih soal yang ingin dijalankan (1 / 2): \n");
     std::cin >> soalYangInginDijalankan;

     if (soalYangInginDijalankan > 2 || soalYangInginDijalankan < 1) {
         printf("Hanya bisa pilih 1 atau 2");
         return 0;
     }

     if (soalYangInginDijalankan == 1) {
         return convertSeconds();
     }

     if (soalYangInginDijalankan == 2) {
         return stringManipulator();
     }
     return 0;
}
