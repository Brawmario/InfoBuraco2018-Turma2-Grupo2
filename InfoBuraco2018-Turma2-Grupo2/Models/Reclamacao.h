#ifndef RECLAMACAO_H
#define RECLAMACAO_H
//Begin section for file Reclamacao.h
//TODO: Add definitions that you want preserved
//End section for file Reclamacao.h

#include<string>

class Buraco; //Dependency Generated Source:Reclamacao Target:Buraco


class MensagemDeFinaliza��oDeOS; //Dependency Generated Source:Reclamacao Target:MensagemDeFinaliza��oDeOS





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Reclamacao
{

    //Begin section for Reclamacao
    //TODO: Add attributes that you want preserved
    //End section for Reclamacao

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string contato;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        // Deu ERROOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO ->Date data; 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string hora;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string identificacao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string fotografia;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Buraco * buraco;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        MensagemDeFinaliza��oDeOS * mensagemDeFinaliza��oDeOS;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Reclamacao(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Reclamacao(); 



        //get contato
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline std::string & get_contato(); 



        //get data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
		// Deu ERROOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO ->inline Date & get_data(); 



        //set data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
		// Deu ERROOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO -> inline void set_data(Date & data); 



        //get hora
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline std::string & get_hora(); 



        //get identificacao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline std::string & get_identificacao(); 



        //get fotografia
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline std::string & get_fotografia(); 



        //get buraco
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Buraco * & get_buraco(); 



        //set buraco
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_buraco(Buraco * & buraco); 



        //get mensagemDeFinaliza��oDeOS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline MensagemDeFinaliza��oDeOS * & get_mensagemDeFinaliza��oDeOS(); 



        //set mensagemDeFinaliza��oDeOS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_mensagemDeFinaliza��oDeOS(MensagemDeFinaliza��oDeOS * & mensagemDeFinaliza��oDeOS); 



};  //end class Reclamacao



#endif
