#include <stdio.h>
#include <string.h>

int no[500005];
char na[500005][15]; 

int main () {
    int n; 
    
    // Input jumlah data
    scanf("%d", &n);

    // 2. INPUT NOMOR ANTRIAN
    // Data sudah urut (ascending), jadi tinggal masukin aja
    for(int i = 0; i < n ; i++){
        scanf("%d", &no[i]);
    }

    // 3. INPUT NAMA
    // Menggunakan na[i] untuk mengakses baris ke-i
    for(int i = 0; i < n; i++){
        scanf("%s", na[i]); 
    }

    int tno;
    char tna[101]; // Buffer buat nama target (meski gak dipake buat search)
    
    // Input data kamu (Nomor dan Nama)
    scanf("%d %s", &tno, tna);

    // 4. SEARCHING (Mencari Index Posisi Kamu)
    int pos = -1;
    for(int i = 0; i < n ; i++){
        if(no[i] == tno){
            pos = i;
            break; // Stop loop kalau sudah ketemu
        }
    }

    // 5. OUTPUT
    if(pos != -1){
        // Print Posisi (Index + 1 karena manusia hitung dari 1)
        printf("%d ", pos + 1);

        // --- Cek Orang Depan (Sebelum) ---
        if (pos == 0) {
            // Kalau kamu index 0 (paling depan), tidak ada orang di depanmu
            printf("null ");
        } else {
            // Print nama orang di index sebelumnya
            printf("%s ", na[pos-1]);
        }

        // --- Cek Orang Belakang (Sesudah) ---
        if (pos == n - 1) {
            // Kalau kamu index terakhir, tidak ada orang di belakangmu
            printf("null\n");
        } else {
            // Print nama orang di index setelahnya
            printf("%s\n", na[pos+1]);
        }
    }
    
    return 0;
}