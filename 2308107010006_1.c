#include <stdio.h>

int main() {
    int choice, decimal, binary, octal;
    
    printf("Pilih konversi yang diinginkan:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");
    scanf("%d", &choice);
    
    switch(choice) {
       
        case 1:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &decimal);
            binary = 0;
            while (decimal > 0) {
                binary = binary * 10 + decimal % 2;
                decimal /= 2;
            }
            printf("Hasil konversi: %d\n", binary);
            break;
        
        case 2:
            printf("Masukkan bilangan biner: ");
            scanf("%d", &binary);
            decimal = 0;
            while (binary > 0) {
                decimal = decimal * 2 + binary % 10;
                binary /= 10;
            }
            printf("Hasil konversi: %d\n", decimal);
            break;
       
        case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &decimal);
            octal = 0;
            while (decimal > 0) {
                octal = octal * 10 + decimal % 8;
                decimal /= 8;
            }
            printf("Hasil konversi: %d\n", octal);
            break;
      
        case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%d", &octal);
            decimal = 0;
            while (octal > 0) {
                decimal = decimal * 8 + octal % 10;
                octal /= 10;
            }
            printf("Hasil konversi: %d\n", decimal);
            break;
      
        default:
            printf("Pilihan anda tidak valid. Mohon masukkan pilihan yang valid.\n");
    }
    
    return 0;
}