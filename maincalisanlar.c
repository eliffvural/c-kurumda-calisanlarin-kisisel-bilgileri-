#include <stdio.h>
#include <stdlib.h>

struct calisanbilgileri{
	char isim[20];
	char soyisim[20];
	int deneyim;
	int maas;
};

int main(int argc, char *argv[]) {
int kisisayisi;
struct calisanbilgileri calisanlar[kisisayisi];
int i;
printf("Lutfen kurumunuzda calisan kisi sayisini giriniz: ");
scanf("%d", &kisisayisi);
printf("Asagida, calisanlar icin istenen bilgileri giriniz: \n");
for(i=1;i<=kisisayisi;i++)
{
	printf("Calisanin ismi: ");
	scanf("%s", &calisanlar[i].isim);
	printf("Calisanin soyismi: ");
	scanf("%s", &calisanlar[i].soyisim);
	printf("Yil olarak calisanin deneyimi: ");
	scanf("%d", &calisanlar[i].deneyim);
	printf("Calisanin maasi: ");
	scanf("%d", &calisanlar[i].maas);
	printf("\n");
}
printf("Calisanlarin bilgileri: \n");
for(i=1;i<=kisisayisi;i++)
{
	printf("Kurumunuzda calisan %d. calisanin ismi: %s\n", i, calisanlar[i].isim);
	printf("Soyismi: %s\n",calisanlar[i].soyisim);
	printf("Yil olarak deneyim suresi: %d\n",calisanlar[i].deneyim);
	printf("Maasi: %d\n",calisanlar[i].maas);
	printf("\n");
}
	
	
	
	
	return 0;
}
