#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	double calculaValor(){

		double valor = _peso * _custoKg;
		return valor;
		
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << _peso << endl
			<< "  Custo por kg: " << _custoKg << endl
			<< "  Custo total: " << std::to_string(this->calculaValor()) << endl;

	}

};

#endif
