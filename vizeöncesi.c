//birinci ara sýnav notunun yüzde 20sini
//ikinci ara sýnav notunun yüzde 30unu
//final notunun yüzde 50sini
//aðýrlýklý notu bul
//A.N >= 90 AA   90>A.N>=80 B  80>A.N>=70 C  70>A.N>=60 D  60>A.N F
//öðrencinin sýnav notlarýný girdi olarak alýp harf notunu yazdýracaðýz

#include<stdio.h>
int main()
{
    int bir, iki, son, agirlik;
    printf("birinci ara sinav notunuzu giriniz:\nikinci ara sinav notunuzu giriniz:\nfinal notunuzu giriniz:\n");
    scanf("%d%d%d", &bir, &iki, &son);
    agirlik = (bir*2/10 + iki*3/10 + son*5/10);/*acaba bunlarý parantez içine almam gerekir mi?*/
    printf("agirlik: %d\n", agirlik);
    if(agirlik>=90)
    {
        printf("harf notunuz: A");
    }
    if(agirlik<90 && agirlik>=80)
    {
        printf("harf notunuz: B");
    }
    if(agirlik<80 && agirlik>=70)
    {
        printf("harf notunu<: C");
    }
    if(agirlik<70 && agirlik>=60)
    {
        printf("harf notunuz: D");
    }
    if(agirlik<60)
    {
        printf("harf notunuz: F");
    }
    return(0);
}
