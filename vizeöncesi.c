//birinci ara s�nav notunun y�zde 20sini
//ikinci ara s�nav notunun y�zde 30unu
//final notunun y�zde 50sini
//a��rl�kl� notu bul
//A.N >= 90 AA   90>A.N>=80 B  80>A.N>=70 C  70>A.N>=60 D  60>A.N F
//��rencinin s�nav notlar�n� girdi olarak al�p harf notunu yazd�raca��z

#include<stdio.h>
int main()
{
    int bir, iki, son, agirlik;
    printf("birinci ara sinav notunuzu giriniz:\nikinci ara sinav notunuzu giriniz:\nfinal notunuzu giriniz:\n");
    scanf("%d%d%d", &bir, &iki, &son);
    agirlik = (bir*2/10 + iki*3/10 + son*5/10);/*acaba bunlar� parantez i�ine almam gerekir mi?*/
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
