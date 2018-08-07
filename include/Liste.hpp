
#ifndef LISTE_HPP
#define LISTE_HPP

#include "ListeGezici.hpp"

class Liste{
	private:
		Dugum *basDugum; // içinde eleman olmayan sadece listenin başını tutan düğüm.
		int elemanSayisi;
		ListeGezici OncekiniKonumuIleBul(int konum) const throw(Tasma){
			if(konum<0 || konum > Uzunluk()) throw Tasma();
			int indeks=0;
			Dugum *gezici = basDugum;
			while(gezici->ileri != NULL && konum != indeks++) gezici = gezici->ileri;
			return ListeGezici(gezici);
		}
	public:
		Liste();
		bool Bosmu() const;
		int Uzunluk() const;
		ListeGezici Ilk() const throw(ListeBos);
		int IlkEleman() const throw(ListeBos);
		void Ekle(int yeni);
		void Ekle(int yeni,int konum) throw(Tasma);
		void Sil(int aranan) throw(ElemanYok);
		void KonumdakiniSil(int konum) throw(Tasma);
		int KonumuBul(int aranan) const throw(ElemanYok);
		friend ostream& operator<<(ostream& ekran, Liste &sag){
			if(sag.Bosmu()) ekran<<"Liste bos";
			else{
				for(ListeGezici gezici = sag.Ilk();!gezici.SonaGeldimi();gezici.ilerle())
					ekran<<gezici.Getir();
				ekran<<endl;
			}
			return ekran;
		}
		void Temizle();
		~Liste();
};
#endif