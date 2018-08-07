
#ifndef DUGUM_HPP
#define DUGUM_HPP

#include <iostream>
using namespace std;

class Dugum{
	public:	
		int eleman;
		Dugum *ileri;
		Dugum(int eleman = int(),Dugum *ilr=NULL){
			this->eleman=eleman;
			ileri=ilr;
		}
};
#endif