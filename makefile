hepsi: derle calistir
Nesneler :=  ./lib/Hata.o ./lib/Hatalar.o ./lib/Dugum.o ./lib/ListeGezici.o ./lib/Liste.o ./lib/Sayi.o ./lib/Yigit.o

derle:
	g++ -I ./include/ -o ./lib/Hata.o -c ./src/Hata.cpp
	g++ -I ./include/ -o ./lib/Hatalar.o -c ./src/Hatalar.cpp
	g++ -I ./include/ -o ./lib/Dugum.o -c ./src/Dugum.cpp
	g++ -I ./include/ -o ./lib/ListeGezici.o -c ./src/ListeGezici.cpp
	g++ -I ./include/ -o ./lib/Liste.o -c ./src/Liste.cpp
	g++ -I ./include/ -o ./lib/Sayi.o -c ./src/Sayi.cpp
	g++ -I ./include/ -o ./lib/Yigit.o -c ./src/Yigit.cpp
	g++ -I ./include/ -o ./bin/test $(Nesneler) ./src/test.cpp
	
calistir:
	./bin/test