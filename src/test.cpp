
#include "Sayi.hpp"
#include <ctime>

int main(){
	int start_s=clock(); // Programın çalışmaya başladığı zaman tutuluyor
	int sayi;
	cout<<"Sayi:";
	cin>>sayi;
	Sayi *yenisayi = new Sayi(sayi);
	yenisayi->FaktoryelAl();
	int stop_s=clock();	// Programın sonlanma zamanı tutuluyor
	cout << "Hesaplama Suresi: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << " milisaniye" << endl; 
	// Çalışma süresi yazdırılıyor
}