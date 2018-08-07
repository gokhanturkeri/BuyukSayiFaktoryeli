
#include "Liste.hpp"

		Liste::Liste(){
			basDugum = new Dugum(); // Boş bir düğüm oluşturuluyor	
			elemanSayisi=0;
		}
		bool Liste::Bosmu() const{
			return basDugum->ileri == NULL;
		}
		int Liste::Uzunluk() const{
			return elemanSayisi;
		}		
		// Listenin ilk düğümünü döndürür
		ListeGezici Liste::Ilk() const throw(ListeBos){
			if(Bosmu()) throw ListeBos();
			return ListeGezici(basDugum->ileri);
		}
		// Listenin ilk elemanını döndürür
		int Liste::IlkEleman() const throw(ListeBos){
			if(Bosmu()) throw ListeBos();
			return basDugum->ileri->eleman;
		}
		// Listenin sonuna verilen elemanı ekler
		void Liste::Ekle(int yeni){
			Ekle(yeni,Uzunluk());
		}
		// Listenin istenen konumuna verilen elemanı ekler
		void Liste::Ekle(int yeni,int konum) throw(Tasma){
			ListeGezici gezici;
			try{
				gezici = OncekiniKonumuIleBul(konum);
			}
			catch(Tasma ts){
				throw ts;
			}
			gezici.simdiki->ileri = new Dugum(yeni,gezici.simdiki->ileri);
			elemanSayisi++;
		}
		// Verilen elemanı listede bulur ve siler.
		void Liste::Sil(int aranan) throw(ElemanYok){
			try{
				int konum = KonumuBul(aranan);
				KonumdakiniSil(konum);
			}
			catch(ElemanYok ey){
				throw ey;
			}
		}
		// Verilen konumdaki elemanı siler
		void Liste::KonumdakiniSil(int konum) throw(Tasma){
			ListeGezici onceki;
			try{
				onceki = OncekiniKonumuIleBul(konum);
			}			
			catch(Tasma ts){
				throw ts;
			}
			if(onceki.simdiki->ileri != NULL){
				Dugum *eskiDugum = onceki.simdiki->ileri;
				// silinen elemanı es geç
				onceki.simdiki->ileri = onceki.simdiki->ileri->ileri;
				delete eskiDugum;
				elemanSayisi--;
			}
		}
		int Liste::KonumuBul(int aranan) const throw(ElemanYok){
			int indeks=0;
			for(ListeGezici gezici(basDugum->ileri);!gezici.SonaGeldimi();gezici.ilerle()){
				if(gezici.simdiki->eleman == aranan) return indeks;
				indeks++;
			}
			throw ElemanYok();
		}
		// Listedeki elemanları temizler
		void Liste::Temizle(){
			while(!Bosmu())
				Sil(Ilk().Getir());			
		}
		Liste::~Liste(){
			Temizle();
			delete basDugum;
		}