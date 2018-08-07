
#ifndef LISTEGEZICI_HPP
#define LISTEGEZICI_HPP

#include "Hatalar.hpp"
#include "Dugum.hpp"


class ListeGezici{
	public:
		Dugum *simdiki; // Listede o anki bulunan konumu ifade eder.
		ListeGezici();
		ListeGezici(Dugum *dugum);
		bool SonaGeldimi() const;
		void ilerle() throw(ListeSonu);
		int Getir() const throw(NullHatasi);
};
#endif