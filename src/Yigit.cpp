
#include "Yigit.hpp"


		Yigit::Yigit(){
			liste = new Liste();
		}
		// Yığıtın boş olup olmadığı kontrol edilir
		bool Yigit::isEmpty() const{
			return liste->Bosmu();
		}
		// Yığıta eleman ekler
		void Yigit::push(int eleman){ 
			liste->Ekle(eleman,0); 
		}
		// Yığıttan eleman çıkarır
		void Yigit::pop() throw(ElemanYok){ 
			if(isEmpty()) throw ElemanYok("Eleman yok");
			liste->KonumdakiniSil(0);
		}
		// Yığıtın en başındaki elemanı getirir
		int Yigit::top() const throw(ElemanYok){
			if(isEmpty()) throw ElemanYok("Eleman yok");
			return liste->IlkEleman();
		}
		// Yığıtı boşaltır
		void Yigit::makeEmpty(){
			liste->Temizle();
		}
		Yigit::~Yigit(){
			makeEmpty();
			delete liste;
		}		