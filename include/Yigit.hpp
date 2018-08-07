
#ifndef YIGIT_HPP
#define YIGIT_HPP

#include <iostream>
using namespace std;

#include "Liste.hpp"


class Yigit{
	private:
		Liste* liste;
	public:
		Yigit();
		bool isEmpty() const;
		void push(int eleman);
		void pop() throw(ElemanYok);
		int top() const throw(ElemanYok);
		void makeEmpty();
		~Yigit();
};
#endif