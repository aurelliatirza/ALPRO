int main(void) {
    float s1;
    float s2;
    float d1;
    float d2;
    float Kel;
    float Luas;

    printf("masukkan nilai sisi layang-layang 1 (m): ");
    scanf("%f", &s1);
    printf("\nmasukkan nilai sisi layang-layang 2 (m): ");
    scanf("%f", &s2);
    printf("\nmasukkan nilai diameter layang-layang 1 (m): ");
    scanf("%f", &d1);
    printf("\nmasukkan nilai diameter layang-layang 2 (m): ");
    scanf("%f", &d2);

    Kel = 2 * (s1 + s2);
    Luas = 0.5 * d1* d2;

    printf("\nnilai keliling layang-layang tersebut ialah %2.f m", Kel, s1,s2);
    printf("\nnilai luas layang-layang tersebut ialah %2.f m^2", Luas, d1,d2);
    return 0;
}
