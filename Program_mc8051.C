#include <reg51.h>

// Menggunakan keyword 'code' agar array disimpan di ROM
const unsigned char code data_array[5] = {0x05, 0x0A, 0x0F, 0x14, 0x19};

// hasil disimpan _at_ RAM alamat 40H
unsigned char data summation _at_ 0x40;

void main(void){
    unsigned char i;
    unsigned char volatileTotal = 0;

    // Perulangan untuk menjumlahkan 5 elemen array
    for (i = 0; i < 5; i++) {
        volatileTotal += data_array[i];
    }

    // Menyimpan hasil akhir ke RAM internal alamat 40H
    summation = volatileTotal;

    // Infinite loop seperti instruksi SJMP HERE di Assembly
    while (1) {

    }
}