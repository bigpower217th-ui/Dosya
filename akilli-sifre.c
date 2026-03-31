#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sifre_üret(int uzunluk) {
    char karakterler[] = "AsHskHCbJKLİiiEAzhzBmKiHslfSsJUHBVCCFFgGvNJKUJ"
                          "ScUqDiOUYTGiLvCXzAJKNBVJKkTtYyuXoQwZHKlïUHgJK"
                          "7428472836"
                          "#!*₺@!++-#₺-₺-))/";
    int n = sizeof(karakterler) - 1;


    srand(time(0));

    printf("Üretilen akıllı şifre: ");
    for (int i = 0; i < uzunluk; i++) {
        int index = rand() % n;
        printf("%c", karakterler [index]);
    }
    printf("\n-----------------------------------------\n");
}

int main() {
  int boy;
 printf("---Akilli Şifre verici---\n");
 printf("Şifre kaç karakter olsun? (önerilen: +16): ");
 scanf("%d", &boy);
 if (boy < 8) {
    printf("Uyari 8 karakterden az şifreler kirilabilir!\n");
 } else {
    sifre_üret(boy);
 }
 return 0;
}