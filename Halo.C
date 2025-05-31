#include <stdio.h>
#include <stdlib.h>

int main(){
    char nama[50];
    char pilihan;
    char lanjut;

    printf("Halo, Selamat datang\n");

    printf("Siapa nama kamu?\n");
    scanf("%s", nama);

    printf("Halo %s, Selamat datang di\n=== BAB DASAR BAHASA C ===\n", nama);

    printf("Apa kamu sudah siap untuk memulainya?\n");
    printf("A. SIAP!\n");
    printf("B. Maaf belum\n");

    printf("Masukan pilihanmu (A/B) ");
    scanf(" %c", &pilihan);

    if (pilihan == 'A' || pilihan == 'a') {
        printf("Mantap %s!, Marikita mulai!\n", nama);

        printf("lanjut ga nih!?\n");
        printf("Y, lanjut\n");
        printf("G, maaf aku sampai sini dulu\n");

        printf("Masukan pilihan (Y/G): ");
        scanf(" %c", &lanjut);

        if (lanjut == 'Y' || lanjut == 'y') {

            system("cls");

            printf("Keren %s, Semangat yang bagus!\n", nama);
            printf("=== PENGENALAN ALGORITMA DAN PEMROGRAMAN ===\n");
            printf("Apa itu Algoritma, Algoritma adalah sebuah prosedur yang berisi baris baris lankah\nuntuk melakukan komputasi atau menyelesaikan suatu masalah.\n_Kenneth H. Rosen\n");
            printf("Apa itu Pemorograman, Pemrograman adalah pemberian instruksi kepada komputer untuk melakukan suatu tugastertentu.\n");
        } else if (lanjut == 'G' || lanjut == 'g') {
            printf("Gapapa %s, Kita coba nanti\n", nama);
        } else {
            printf("Pilihan tidak valid!\n");
        }

    } else if (pilihan == 'B' || pilihan =='b') {
        printf("It's okey %s, kita coba lain waktu\n", nama);
    } else {
        printf("Pilihan tidak valid!\n");
    }


    return 0;
}