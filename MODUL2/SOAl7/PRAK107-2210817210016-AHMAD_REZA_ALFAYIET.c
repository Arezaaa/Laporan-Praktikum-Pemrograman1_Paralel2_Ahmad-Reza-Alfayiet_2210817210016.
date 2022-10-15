#include <stdio.h>

int main()
{
    int x = 4, y = 5, z = 7, Keliling, Harga = 85000;
    Keliling = x + y + z;

    printf ("Diketahui : \n");
    printf ("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", x, y, z);
    printf ("Keliling Tanah Pak Dengklek adalah %d\n", Keliling);
    printf ("Harga tanah Per Meter adalah %d\n\n", Harga);

    printf("Jawaban : \n");
    printf ("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", Keliling * Harga);

    return 0;
}
