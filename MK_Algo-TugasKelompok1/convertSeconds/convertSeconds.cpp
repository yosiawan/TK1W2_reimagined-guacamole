//
// Created by Yosia on 08/06/24.
//

#include <cstdio>
#include <iostream>

int convertSeconds() {
    int inputSeconds;
    printf("Masukkan jumlah detik (harus lebih dari atau sama dengan 0): \n");
    std::cin >> inputSeconds;

    if (inputSeconds < 0) {
        printf("Jumlah detik harus lebih dari sama dengan 0 \n");
        return 1;
    }

    const int hours = inputSeconds / 3600;
    const int modSeconds = inputSeconds % 3600;
    const int minutes = modSeconds / 60;
    const int seconds = modSeconds % 60;

    printf("Sama dengan %d jam, %d menit, %d detik;", hours, minutes, seconds);
    return 0;
}
