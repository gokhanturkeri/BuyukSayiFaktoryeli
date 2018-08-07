
#ifndef SAYI_HPP
#define SAYI_HPP

#include <iostream>
#include "Liste.hpp"
#include "Yigit.hpp"
using namespace std;

class Sayi{
	private:
		int sayi;
		Liste *liste;
	public: 
		Sayi();
		Sayi(int girdi);
		void FaktoryelAl();
};

#endif