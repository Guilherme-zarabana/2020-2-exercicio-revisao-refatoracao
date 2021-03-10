#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	protected:

		double _peso = 0.0;
		double _custoKg = 0.0;
		double _total = 0.0;
		Cliente _remetente;
		Cliente _destinatario;
	
	public:
	
		void setPeso(double peso){
			
			_peso = peso;
			
		}
	
		void setCustoKg(double custoKg){

			_custoKg = custoKg;
			
		}
	
		void setTotal(double total){
			
			_total = total;
			
		}
	
		void setRemetente(Cliente rementente){

			_rementente.setNome(remetente.getNome);
			_remetente.setEndereco(remetente.getEndereco);
			_remetente.setCidade(remetente.getCidade);
			_remetente.setEstado(remetente.getEstado);
			_remetente.setCep(remetente.getCep);
			
		}
	
		void setDestinatario(Cliente destinatario){
			
			_destinatario.setNome(destinatario.getNome);
			_destinatario.setEndereco(destinatario.getEndereco);
			_destinatario.setCidade(destinatario.getCidade);
			_destinatario.setEstado(destinatario.getEstado);
			_destinatario.setCep(destinatario.getCep);
			
		}			
			
		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.printCliente();
			std::cout << "[Destinatário]" << endl;
			dest.printCliente();
		}

};

#endif
