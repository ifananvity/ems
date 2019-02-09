/*
 * header.h
 *
 *  Created on: 20 May 2018
 */

#include "header.h"

void gotoxy (int x, int y) {
    // Fungsi ini merubah posisi cursor dengan koordinat x dan y
    coord.X = x;
    coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int showsCurrentTime(void) {
    // Fungsi ini mencetak tanggal dan waktu
    time_t t;
    time(&t);
    printf("Date and time: %s\n",ctime(&t));

    return 0 ;
}

void returnFunc(void) {
    // Fungsi ini memanggil mainMenu() dengan inputan hanya enter 
    printf("Tekan ENTER untuk kembali ke main menu");
a:
    if(getch()==13) //allow only use of enter
        mainMenu();
    else
        goto a;
}

void swap(int *a, int *b) {
    // Fungsi ini menukar value dari 2 var integer
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(char *str1, char *str2) {
    // Fungsi ini menukar value dari 2 var strings
    char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    free(temp);
}

void printTitle(void) {
    // Fungsi ini mencetak splash screen/ "welcome message"
    system("cls");

    char title[] = "Welcome to EMS";
    char subtitle[] = "An Event Management System";

    gotoxy(10, 6);
    for (i = 0; i < strlen(title); i++) {
        Sleep(45);
        printf("%c", title[i]);
    }
    gotoxy(10, 7);
    for (i = 0; i <= strlen(subtitle); i++) {
        Sleep(45);
        printf("%c", subtitle[i]);
    }

    gotoxy(10, 10);
    for (i = 0; i < 3; i++) {
        Sleep(900);
        printf(". ");
    }
}

void mainMenu(void) {
    // Fungsi ini berguna sebagai menu/jembatan dari kelima fitur aplikasi, hence the name
    system("cls");

    gotoxy(20,3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,5);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Tambah Kegiatan");
    gotoxy(20,7);
    printf("\xDB\xDB\xDB\xDB\xB2 2. Tampilkan Kegiatan");
    gotoxy(20,9);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Hapus Kegiatan");
    gotoxy(20,11);
    printf("\xDB\xDB\xDB\xDB\xB2 4. Cari Kegiatan");
    gotoxy(20,13);
    printf("\xDB\xDB\xDB\xDB\xB2 5. Urut Kegiatan");
    gotoxy(20,15);
    printf("\xDB\xDB\xDB\xDB\xB2 6. Keluar");
    gotoxy(20,17);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    
    gotoxy(20,18);
    showsCurrentTime();

    gotoxy(51,21);
    printf("ems v1.2\n");
    
    gotoxy(20,19);
    printf("Pilihan: ");
    switch (getch()) {
        case '1' : {
            addEvent();
            break;
        }
        case '2' : {
            listEvent();
            break;
        }
        case '3' : {
            removeEvent();
            break;
        }
        case '4' : {
            searchEvent();
            break;
        }
        case '5' : {
            sortEvent();
            break;
        }
        case '6' : {
            system("cls");
            exit(0);
        }
        default: {
            gotoxy(29,19);
            printf("Invalid input\n");
            if (getch())
                mainMenu();
        }
    }
}

void addEvent(void) {
    // Fungsi ini mem-prompt pengguna untuk mengisi informasi yang dibutuhkan untuk menambahkan kegiatan baru
    system("cls");

    gotoxy(20,3);
    printf("Sertakan informasi berikut:");
    gotoxy(20,4);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,5);
    printf("\xB2");
    gotoxy(58,5);
    printf("\xB2");
    gotoxy(20,6);
    printf("\xB2");
    gotoxy(58,6);
    printf("\xB2");
    gotoxy(20,7);
    printf("\xB2");
    gotoxy(58,7);
    printf("\xB2");
    gotoxy(20,8);
    printf("\xB2");
    gotoxy(58,8);
    printf("\xB2");
    gotoxy(20,9);
    printf("\xB2");
    gotoxy(58,9);
    printf("\xB2");
    gotoxy(20,10);
    printf("\xB2");
    gotoxy(58,10);
    printf("\xB2");
    gotoxy(20,11);
    printf("\xB2");
    gotoxy(58,11);
    printf("\xB2");
    gotoxy(20,12);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(21,5);
    printf("Nama Kegiatan: ");
    gets(event[n].name);
    fflush(stdin);
    if (event[n].name[0] == 0) {
        // invalid jika pengguna meng-input enter/null
        gotoxy(60,5);
        printf("Invalid input!\n");
        if (getch()) {
            fflush(stdin);
            addEvent();
        }
    }

    // DAY
    gotoxy(21,6);
    printf("Tanggal (DD) :");
    gotoxy(36,6);
    scanf("%d", &event[n].date.dd);
    if (event[n].date.dd < 1 || event[n].date.dd > 30) {
        // hanya mengijinkan angka 1-30
        gotoxy(60,6);
        printf("Invalid input!\n");
        if (getch()) {
            fflush(stdin);
            addEvent();
        }
    }
    // MONTH
    gotoxy(21,6);
    printf("Tanggal (MM) : %d/", event[n].date.dd);
    if (event[n].date.dd < 10) {
        gotoxy(38,6);
    } else {
        gotoxy(39,6);
    }
    scanf("%d", &event[n].date.mm);
    if (event[n].date.mm < 1 || event[n].date.mm > 12) {
        // hanya mengijinkan angka 1-12
        gotoxy(60,6);
        printf("Invalid input!\n");
        if (getch()) {
            fflush(stdin);
            addEvent();
        }
    }
    // YEAR
    gotoxy(21,6);
    printf("Tanggal(YYYY): %d/%d/", event[n].date.dd, event[n].date.mm);
    if (event[n].date.dd < 10) {
        if (event[n].date.mm < 10) {
            gotoxy(40,6);
        } else {
            gotoxy(41,6);
        }
    } else {
        if (event[n].date.mm >= 10) {
            gotoxy(42,6);
        } else {
            gotoxy(41,6);
        }
    }
    scanf("%d", &event[n].date.yy);
    if (event[n].date.yy < 1000 || event[n].date.yy > 9999) {
        // hanya mengijinkan angka 1000-9999
        gotoxy(60,6);
        printf("Invalid input!\n");
        if (getch()) {
            fflush(stdin);
            addEvent();
        }
    }

    // HOUR
    gotoxy(21,7);
    printf("Waktu (HH)   :");
    gotoxy(36,7);
    scanf("%d", &event[n].time.hh);
    if (event[n].time.hh < 0 || event[n].time.hh > 24) {
        // hanya mengijinkan angka 0-24
        gotoxy(60,7);
        printf("Invalid input!\n");
        if (getch()) {
            fflush(stdin);
            addEvent();
        }
    }

    // MINUTES
    gotoxy(21,7);
    printf("Waktu (MM)   : %d:", event[n].time.hh);
    gotoxy(39,7);
    scanf("%d", &event[n].time.mm);
    if (event[n].time.mm < 0 || event[n].time.mm > 59) {
        // hanya mengijinkan angka 0-59
        gotoxy(60,7);
        printf("Invalid input!\n");
        if (getch()) {
            fflush(stdin);
            addEvent();
        }
    }

    // PLACE
    gotoxy(21,8);
    printf("Tempat       : ");
    fflush(stdin);
    gets(event[n].place);
    gotoxy(21,9);
    printf("Orang terkait: ");
    gets(event[n].peopleInvolved);

    // var n sebagai jumlah kegiatan (n-1)
    // increment n jika proses pembuatan kegiatan baru sukses
    n++;

    gotoxy(21,11);
    printf("Tambah kegiatan lagi? (Y/N) ");
    if (getch() == 'n') {
        mainMenu();
    } else {
        addEvent();
    }
}

void listEvent(void) {
    // Fungsi ini mencetak semua kegiatan yang terdaftar
    system("cls");

    gotoxy(0,3);
    printf("\t========================= DAFTAR KEGIATAN =========================");
    if (n != 0) {
        for (i = 0; i < n; i++) {
            printf("\n\t[%d] %s\n", i+1, event[i].name);
            printf("\t    Tanggal      : %d/%d/%d\n", event[i].date.dd, event[i].date.mm, event[i].date.yy);
            printf("\t    Jam          : %d:%d\n", event[i].time.hh, event[i].time.mm);
            printf("\t    Tempat       : %s\n", event[i].place);
            printf("\t    Orang Terkait: %s\n", event[i].peopleInvolved);
        }
    } else {
        printf("\n\tDaftar kegiatan kosong\n");
    }
    
    printf("\n\n\t");
    returnFunc();
}

void removeEvent(void) {
    // Fungsi ini mem-prompt pengguna untuk mengisikan nomor urut kegiatan untuk dihapus      
    int del;
    system("cls");

    gotoxy(0,3);
    printf("\t========================= DAFTAR KEGIATAN =========================");
    if (n != 0) {
        for (i = 0; i < n; i++) {
            printf("\n\t[%d] %s\n", i+1, event[i].name);
            printf("\t    Tanggal      : %d/%d/%d\n", event[i].date.dd, event[i].date.mm, event[i].date.yy);
            printf("\t    Jam          : %d:%d\n", event[i].time.hh, event[i].time.mm);
            printf("\t    Tempat       : %s\n", event[i].place);
            printf("\t    Orang Terkait: %s\n", event[i].peopleInvolved);
        }
    } else {
        printf("\n\tDaftar kegiatan kosong\n");
    }

    printf("\n\tMasukan nomor urut kegiatan yang akan dihapus: (0 untuk kembali ke main menu)");
    scanf("%d", &del);

    if (del <= 0)
        mainMenu();

    if (del-1 < n) {
        for (i = del-1; i < n-1; i++) {
            swap2(event[i].name, event[i+1].name);
            swap2(event[i].place, event[i+1].place);
            swap2(event[i].peopleInvolved, event[i+1].peopleInvolved);
            swap(&event[i].date.dd, &event[i+1].date.dd);
            swap(&event[i].date.mm, &event[i+1].date.mm);
            swap(&event[i].date.yy, &event[i+1].date.yy);
            swap(&event[i].time.hh, &event[i+1].time.hh);
            swap(&event[i].time.mm, &event[i+1].time.mm);
        }

        n--;
        removeEvent();
    } else {
        printf("\tData tidak ditemukan");
        getch();
        removeEvent();
    }
}

void searchEvent(void) {
    // Fungsi ini mem-prompt pengguna untuk memilih mode pencarian, kemudian akan diproses pada fungsi
    // search(By); yang menerima argument pilihan
    system("cls");

    gotoxy(20,3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PILIH MODE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,5);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Cari Berdasarkan Nama");
    gotoxy(20,7);
    printf("\xDB\xDB\xDB\xDB\xB2 2. Cari Berdasarkan Tanggal");
    gotoxy(20,9);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,10);
    printf("Pilihan: ");
    switch (getch()) {
        case '1' : {
            searchBy(1);
            break;
        }
        case '2' : {
            searchBy(2);
            break;
        }
        default: {
            gotoxy(29,10);
            printf("Invalid input\n");
            if (getch())
                searchEvent();
        }
    }
}

void searchBy(int selection) {
    // Fungsi ini memproses pencarian berdasarkan pilihan pengguna pada fungsi searchEvent();
    struct eventInfo searchDate;
    char searchName[30];
    int fo[10];
    int temp;
    flag = FALSE;
    system("cls");

    if (selection == 1) {
        // Cari berdasarkan nama (pilihan 1)
        gotoxy(0,3);
        printf("\tMasukan nama kegiatan yang akan dicari: ");
        fflush(stdin);
        gets(searchName);
        fflush(stdin);

        i = 0;
        j = 0;
        while (i < n) {
            if (strcmp(searchName, event[i].name) == 0) {
                flag = TRUE;
                fo[j] = i;
                j++;        
            }
            i++;
        }
    } else {
        // Cari berdasarkan tanggal (dd/mm/yyyy) (pilihan 2)
        gotoxy(0,3);
        printf("\tMasukan tanggal kegiatan yang akan dicari: \n");
        printf("\tDD  : ");
        fflush(stdin);
        scanf("%d", &searchDate.date.dd);
        printf("\tMM  : ");
        scanf("%d", &searchDate.date.mm);
        printf("\tYYYY: ");
        scanf("%d", &searchDate.date.yy);


        i = 0;
        j = 0;
        while (i < n) {
            if (searchDate.date.dd == event[i].date.dd && 
                searchDate.date.mm == event[i].date.mm &&
                searchDate.date.yy == event[i].date.yy) {
                flag = TRUE;
                fo[j] = i;
                j++;        
            }
            i++;
        }
    }

    if (flag) {
        for (i = 0; i < j; i++) {
            temp = fo[i];
            printf("\n\t[%d] %s\n", temp+1, event[temp].name);
            printf("\tTanggal      : %d/%d/%d\n", event[temp].date.dd, event[temp].date.mm, event[temp].date.yy);
            printf("\tJam          : %d:%d\n", event[temp].time.hh, event[temp].time.mm);
            printf("\tTempat       : %s\n", event[temp].place);
            printf("\tOrang Terkait: %s\n", event[temp].peopleInvolved);
        }
    } else {
        printf("\n\tData tidak ditemukan\n");
    }

    printf("\n\n\t");
    returnFunc();
}

void sortEvent(void) {
    // Fungsi ini mem-prompt pengguna untuk memilih mode pengurutan
    system("cls");

    // menghitung total hari dari masing-masing kegiatan yang kemudian akan di bandingkan
    for (i = 0; i < n; i++) {
        event[i].date.total = (event[i].date.yy * 365) + (event[i].date.mm * 30) + event[i].date.dd;
    }

    gotoxy(20,3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PILIH MODE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,5);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Urutkan secara Ascending");
    gotoxy(20,7);
    printf("\xDB\xDB\xDB\xDB\xB2 2. Urutkan secara Descending");
    gotoxy(20,9);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,10);
    printf("Pilihan: ");
    switch (getch()) {
        case '1' : {
            for (i = 0; i < (n-1); i++) {
                for (j = (i+1); j < n; j++) {
                    if (event[i].date.total > event[j].date.total) { // sort in ascending order
                        swap2(event[i].name, event[j].name);
                        swap2(event[i].place, event[j].place);
                        swap2(event[i].peopleInvolved, event[j].peopleInvolved);
                        swap(&event[i].date.dd, &event[j].date.dd);
                        swap(&event[i].date.mm, &event[j].date.mm);
                        swap(&event[i].date.yy, &event[j].date.yy);
                        swap(&event[i].time.hh, &event[j].time.hh);
                        swap(&event[i].time.mm, &event[j].time.mm);
                        swap(&event[i].date.total, &event[j].date.total);
                    }
                }
            }
            break;
        }
        case '2' : {
            for (i = 0; i < (n-1); i++) {
                for (j = (i+1); j < n; j++) {
                    if (event[i].date.total < event[j].date.total) { // sort in descending order
                        swap2(event[i].name, event[j].name);
                        swap2(event[i].place, event[j].place);
                        swap2(event[i].peopleInvolved, event[j].peopleInvolved);
                        swap(&event[i].date.dd, &event[j].date.dd);
                        swap(&event[i].date.mm, &event[j].date.mm);
                        swap(&event[i].date.yy, &event[j].date.yy);
                        swap(&event[i].time.hh, &event[j].time.hh);
                        swap(&event[i].time.mm, &event[j].time.mm);
                        swap(&event[i].date.total, &event[j].date.total);
                    }
                }
            }
            break;
        }
        default: {
            gotoxy(29,10);
            printf("Invalid input\n");
            if (getch())
                sortEvent();
        }
    }

    gotoxy(20,12);
    printf("Daftar kegiatan telah diurutkan\n");
    getch();
    mainMenu();
}