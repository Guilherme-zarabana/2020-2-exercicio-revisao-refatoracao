#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::printCliente(){

	std::cout << "  Nome: " << _nome << endl
		 << "  Endereço: " << _endereco << endl
		 << "  Cidade: " << _cidade << endl
		 << "  Estado: " << _estado << endl
		 << "  CEP: " << _cep << endl;

}

void Cliente::setNome(std::string nome){
	
	this->_nome = nome;
	
}

std::string Cliente::getNome(){
	
	return this->_nome;
	
}

void Cliente::setEndereco(std::string endereco){
	
	this->_endereco = endereco;
	
}


std::string Cliente::getEndereco(){
	
	return this->_endereco;
	
}

void Cliente::setCidade(std::string cidade){
	
	this->_cidade = cidade;
	
}


std::string Cliente::getCidade(){
	
	return this->_cidade;
	
}

void Cliente::setEstado(std::string estado){

	this->_estado = estado;
	
}


std::string Cliente::getEstado(){
	
	return this->_estado;
	
}

void Cliente::setCep(std::string cep){

	this->_cep = cep;
	
}


std::string Cliente::getCep(){
	
	return this->_cep;
	
}
