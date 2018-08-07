
#include "ListeGezici.hpp"



		ListeGezici::ListeGezici(){
			simdiki=NULL;
		}
		ListeGezici::ListeGezici(Dugum *dugum){
			simdiki=dugum;
		}
		bool ListeGezici::SonaGeldimi() const{ // sona gelip gelmediğini kontrol eder
			return simdiki == NULL;
		}
		void ListeGezici::ilerle() throw(ListeSonu){ // ilerleme metodu
			if(SonaGeldimi()) throw ListeSonu();
			simdiki = simdiki->ileri;
		}
		int ListeGezici::Getir() const throw(NullHatasi) { // o anki konumdaki nesneyi getirir
			if(simdiki == NULL) throw NullHatasi();
			return simdiki->eleman;
		}