
#include "Sayi.hpp"


		Sayi::Sayi(){
			sayi = 0;
			liste = NULL;
		}
		
		Sayi::Sayi(int girdi)
		{
			sayi = girdi;
			liste = new Liste();
		}
		
		void Sayi::FaktoryelAl()
		{
			cout<<sayi<<"!=";
			int sifirmi = 1;
			int* digitDizisi = new int[1000000];	// Heap bellek bölgesinde sonucun tutulacağı dizi açılıyor
			int toplam,elde=0,sayac;		// Çarpma işlemi yapıldıktan sonra alt alta toplarken eldeyi tutmak için elde tanımlanıyor
			register int i;
			for(i=0;i<1000000;i++)
				digitDizisi[i]=0;		// Tüm digit dizisi elemanları 0'a eşitleniyor
			
			i=1000000-1;				// Dizinin son elemanından başlanıyor
			digitDizisi[1000000-1]=1;
			for(sayac=2;sayac<=sayi;sayac++) // Faktoriyel sonucu hesaplanıp her digit dizi elemanı olarak atanıyor
			{
			  while(i>0)
			   {
				  toplam=digitDizisi[i]*sayac+elde;
				  elde=0;
				if(toplam>9)
				 {
				  digitDizisi[i]=toplam%10;
				  elde=toplam/10;
				 }
				else
				 digitDizisi[i]=toplam;
				  i--;
				}
			elde=0;
			toplam=0;
			i=1000000-1;
			}
			Yigit *yigitimiz = new Yigit();
			// Bağıl liste oluşturulup faktöryel sonucunun her bir digiti düğüm olarak oluşturuluyor
			for (int k = 0 ; k < 1000000 ; k++) 
			{
				if (digitDizisi[k] != 0 ) // Sonucun yazıldığı dizide sonuç harici elemanlar (0'lar) eleniyor.
				{
					sifirmi = 0;
				}
				if (sifirmi == 0)
				{
				liste-> Ekle(digitDizisi[k]);
				// Faktöryel sonucunun her bir digit yığıta ekleniyor
				yigitimiz -> push(digitDizisi[k]);
				}
			}
			cout<<*liste;
			delete liste;
			delete yigitimiz;
			delete digitDizisi;
		}