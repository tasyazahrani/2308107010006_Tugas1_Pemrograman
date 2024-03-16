#include <stdio.h>

int main() {
    int tahun;

    while (1) {
        printf("Masukkan tahun (4 digit): ");
        if (scanf("%d", &tahun) != 1 || tahun < 1000 || tahun > 9999) {
            printf("Input tidak valid. Mohon masukkan tahun yang valid.\n");
            while (getchar() != '\n'); 
            continue;
        }
        break;
    }

    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        printf("%d adalah tahun kabisat.\n", tahun);
    } 
    
    else {
        printf("%d bukan tahun kabisat.\n", tahun);
    }

    return 0;
}
