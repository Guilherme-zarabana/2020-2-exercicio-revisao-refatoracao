#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private:

		string _nome;
		string _endereco;
		string _cidade;
		string _estado;
		string _cep;
	
	public:
	
		void setNome(string nome);// altera o nome do cliente
		string getNome();
		void setEndereco(string endereco);// altera o endereco do cliente
		string getEndereco();
		void setCidade(string cidade);// altera a cidade do cliente
		string getCidade();
		void setEstado(string estado);// altera o estado do cliente
		string getEstado();
		void setCep(string cep);// altera o cep do cliente
		string getCep();
		void printCliente(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif
