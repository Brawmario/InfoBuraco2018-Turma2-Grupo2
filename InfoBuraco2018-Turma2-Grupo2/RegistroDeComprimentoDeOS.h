#ifndef REGISTRODECOMPRIMENTODEOS_H
#define REGISTRODECOMPRIMENTODEOS_H
//Begin section for file RegistroDeComprimentoDeOS.h
//TODO: Add definitions that you want preserved
//End section for file RegistroDeComprimentoDeOS.h

#include<string>

class Relatorio; //Dependency Generated Source:RegistroDeComprimentoDeOS Target:Relatorio


class Fatura; //Dependency Generated Source:RegistroDeComprimentoDeOS Target:Fatura


class MensagemDeFinalizaçãoDeOS; //Dependency Generated Source:RegistroDeComprimentoDeOS Target:MensagemDeFinalizaçãoDeOS


class OS; //Dependency Generated Source:RegistroDeComprimentoDeOS Target:OS


class PlanoSaida; //Dependency Generated Source:RegistroDeComprimentoDeOS Target:PlanoSaida





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class RegistroDeComprimentoDeOS
{

    //Begin section for RegistroDeComprimentoDeOS
    //TODO: Add attributes that you want preserved
    //End section for RegistroDeComprimentoDeOS

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string data;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string ImagemDoBuracoConsertado;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string statusAtualizadoDaOS;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float custoDaOperacao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Relatorio * relatorio;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Fatura * fatura;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        MensagemDeFinalizaçãoDeOS * mensagemDeFinalizaçãoDeOS;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OS * oS;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        PlanoSaida * planoSaida;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        RegistroDeComprimentoDeOS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~RegistroDeComprimentoDeOS(); 



        //get data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline std::string & get_data(); 



        //get ImagemDoBuracoConsertado
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline std::string & get_ImagemDoBuracoConsertado(); 



        //get statusAtualizadoDaOS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline std::string & get_statusAtualizadoDaOS(); 



        //get custoDaOperacao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline float & get_custoDaOperacao(); 



        //set custoDaOperacao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_custoDaOperacao(float & custoDaOperacao); 



        //get relatorio
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Relatorio * & get_relatorio(); 



        //set relatorio
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_relatorio(Relatorio * & relatorio); 



        //get fatura
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Fatura * & get_fatura(); 



        //set fatura
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_fatura(Fatura * & fatura); 



        //get mensagemDeFinalizaçãoDeOS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline MensagemDeFinalizaçãoDeOS * & get_mensagemDeFinalizaçãoDeOS(); 



        //set mensagemDeFinalizaçãoDeOS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_mensagemDeFinalizaçãoDeOS(MensagemDeFinalizaçãoDeOS * & mensagemDeFinalizaçãoDeOS); 



        //get oS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline OS * & get_oS(); 



        //set oS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_oS(OS * & oS); 



        //get planoSaida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline PlanoSaida * & get_planoSaida(); 



        //set planoSaida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_planoSaida(PlanoSaida * & planoSaida); 



};  //end class RegistroDeComprimentoDeOS



#endif
