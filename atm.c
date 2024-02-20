#include<stdio.h>
int main(){
	int islem;
	int bakiye=500;
	int tutar;
	int alici;
	int sifre;
	
	printf("                                                    |KOC BANK|\n");
	
	printf("                                                    HOSGELDINIZ\n");
	printf("                                            'Bir Bankadan Daha Fazlasi'\n");
	
	printf("Sifrenizi Giriniz:");
	scanf("%d",&sifre);
	printf("ALI KAAN KOC Hosgeldiniz\n");
		
	
	
	
	printf("ISLEMLER:\n1-Para Cekme:\n2-Para Yatirma:\n3-Havale Yapma:\n4-Bakiye Sorgulama:\n5-Kart Iade:\n");
	printf("Islem Seciniz:");
	scanf("%d",&islem);
	switch(islem){
		case 1:
			printf("Bakiyeniz:%deuro\n",bakiye);
			printf("Cekmek Istediginiz Tutar:");
			scanf("%deuro",&tutar);
			if(tutar>bakiye){
				printf("Bakiye Yetersiz :(");
				break;
			}
			bakiye -=tutar;
			printf("Islem Basarili\n");
			printf("Yeni Bakiyeniz:%deuro\n",bakiye);
			break;
			case 2:
			printf("Bakiyeniz:%deuro\n",bakiye);
			printf("Yatirmak Istediginiz Tutar:");
			scanf("%deuro",&tutar);
			bakiye +=tutar;
			printf("Islem Basarili\n");
			printf("Yeni Bakiyeniz:%deuro",bakiye);
			break;
			case 3:
			printf("Bakiyeniz:%deuro\n",bakiye);
			printf("Alici Seciniz:1-Kayitli Alici 2-Yeni Alici: ");
			scanf("%d",&alici);
			printf("Kayitli Alicilar:1-Babam 2-Annem 3-Ablam 4-Yasir: ");
			scanf("%d",&alici);
			printf("Havale Yapilacak Tutar:");
			scanf("%deuro",&tutar);
			if(tutar>bakiye){
				printf("Bakiye Yetersiz :(");
				break;
			}
			bakiye -=tutar;
			printf("Islem Basarili\n");
			printf("Yeni Bakiyeniz:%deuro",bakiye);	
			break;
			case 4:
				
			printf("Bakiyeniz:%deuro",bakiye);
			break;
			case 5:
			printf("Kart Iade Edildi");
			break;
			default :
				printf("Gecersiz Islem");
				break;
	
	}
	return 0;
}

