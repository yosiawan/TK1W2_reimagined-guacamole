//
// Created by Yosia on 08/06/24.
//
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <string>
#include <algorithm>


int stringManipulator() {
    //Deklarasi 3 variabel untuk menyimpan tiga kalimat yang akan diinput user
    std::string kalimat1, kalimat2, kalimat3 ;

    //User input 3 kalimat 
    std::cout << "===Masukkan Kalimat===" << std::endl;
    std::getline(std::cin,kalimat1);
    std::cout << "Kalimat 1 = ";
    std::getline(std::cin,kalimat1);
    std::cout << "Kalimat 2 = ";
    std::getline(std::cin,kalimat2);
    std::cout << "Kalimat 3 = ";
    std::getline(std::cin,kalimat3);

    //Gabungan 3 kalimat
    std::string gabungan = kalimat1 + " " + kalimat2 + " " + kalimat3;

    //Reverse gabungan 3 kalimat
    std::string gabungan_terbalik = gabungan;
    std::reverse(gabungan_terbalik.begin(), gabungan_terbalik.end());

    //Function untuk menghitung jumlah huruf tanpa menghitung spasi
    auto hitung_huruf_tanpa_spasi = [](const std::string& kalimat){
        int jumlah_huruf = 0;
        for (char c : kalimat){
            if (c != ' ') {
                jumlah_huruf++;
            }
        }
        return jumlah_huruf;   
    };

    //Menghitung jumlah huruf dalam dalam setiap kalimat tanpa menghitung spasi
    int jumlah_huruf_kalimat1 = hitung_huruf_tanpa_spasi(kalimat1);
    int jumlah_huruf_kalimat2 = hitung_huruf_tanpa_spasi(kalimat2);
    int jumlah_huruf_kalimat3 = hitung_huruf_tanpa_spasi(kalimat3);

    //Menghitung total jumlah huruf tanpa spasi dari ketiga kalimat
    int total = jumlah_huruf_kalimat1 + jumlah_huruf_kalimat2 + jumlah_huruf_kalimat3;

    //Hasil
    std::cout << "Gabungan 3 buah inputan kalimat = " << gabungan << std::endl;
    std::cout << "Hasil membalik kalimat gabungan = " << gabungan_terbalik << std::endl;
    std::cout << "Jumlah Huruf kalimat pertama = " << jumlah_huruf_kalimat1 << std::endl;
    std::cout << "Jumlah Huruf kalimat kedua = " << jumlah_huruf_kalimat2 << std::endl;
    std::cout << "Jumlah Huruf kalimat ketiga = " << jumlah_huruf_kalimat3 << std::endl;
    std::cout << "Total Jumlah huruf  = " << total << std::endl;

    return 0;
}