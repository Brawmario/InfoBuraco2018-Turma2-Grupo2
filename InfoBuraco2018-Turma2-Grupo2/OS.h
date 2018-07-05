#pragma once
#include<string>

class Buraco; //Dependency Generated Source:OS Target:Buraco


class PlanoSaida; //Dependency Generated Source:OS Target:PlanoSaida


class RegistroDeComprimentoDeOS; //Dependency Generated Source:OS Target:RegistroDeComprimentoDeOS

class OS
{
private:


	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	int identificacao;



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	std::string prioridadeAtendimento;



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	int estimativaPessoal;



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	float estimativaEquipamento;



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	float estimativaMaterial;



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	float custoEstimado;



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	std::string status;



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	Buraco * buraco;


	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	PlanoSaida * planoSaida;



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	RegistroDeComprimentoDeOS * registroDeComprimentoDeOS;


public:
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	OS();



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	virtual ~OS();



	//get identificacao
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline int & get_identificacao();
	inline void set_identificacao(int & identificacao);




	//get prioridadeAtendimento
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline std::string & get_prioridadeAtendimento();
	inline void set_prioridadeAtendimento(std::string & prioridadeAtendimento);



	//get estimativaPessoal
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline int & get_estimativaPessoal();



	//set estimativaPessoal
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline void set_estimativaPessoal(int & estimativaPessoal);



	//get estimativaEquipamento
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline float & get_estimativaEquipamento();



	//set estimativaEquipamento
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline void set_estimativaEquipamento(float & estimativaEquipamento);



	//get estimativaMaterial
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline float & get_estimativaMaterial();



	//set estimativaMaterial
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline void set_estimativaMaterial(float & estimativaMaterial);



	//get custoEstimado
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline float & get_custoEstimado();



	//set custoEstimado
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline void set_custoEstimado(float & custoEstimado);



	//get status
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline std::string & get_status();
	inline void set_status(std::string & status);




	//get buraco
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline Buraco * & get_buraco();



	//set buraco
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline void set_buraco(Buraco * & buraco);


	//get planoSaida
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline PlanoSaida * & get_planoSaida();



	//set planoSaida
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline void set_planoSaida(PlanoSaida * & planoSaida);



	//get registroDeComprimentoDeOS
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline RegistroDeComprimentoDeOS * & get_registroDeComprimentoDeOS();



	//set registroDeComprimentoDeOS
	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	inline void set_registroDeComprimentoDeOS(RegistroDeComprimentoDeOS * & registroDeComprimentoDeOS);



};

