#ifndef MENSAGEMDEFINALIZAÇÃODEOS_H
#define MENSAGEMDEFINALIZAÇÃODEOS_H
//Begin section for file MensagemDeFinalizaçãoDeOS.h
//TODO: Add definitions that you want preserved
//End section for file MensagemDeFinalizaçãoDeOS.h

#include<string>

class Reclamacao; //Dependency Generated Source:MensagemDeFinalizaçãoDeOS Target:Reclamacao


class RegistroDeComprimentoDeOS; //Dependency Generated Source:MensagemDeFinalizaçãoDeOS Target:RegistroDeComprimentoDeOS





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class MensagemDeFinalizaçãoDeOS
{

    //Begin section for MensagemDeFinalizaçãoDeOS
    //TODO: Add attributes that you want preserved
    //End section for MensagemDeFinalizaçãoDeOS

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string texto;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string destinatario;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Reclamacao * reclamacao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        RegistroDeComprimentoDeOS * registroDeComprimentoDeOS;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        MensagemDeFinalizaçãoDeOS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~MensagemDeFinalizaçãoDeOS(); 



        //get texto
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline std::string & get_texto(); 



        //get destinatario
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline std::string & get_destinatario(); 



        //get reclamacao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Reclamacao * & get_reclamacao(); 



        //set reclamacao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_reclamacao(Reclamacao * & reclamacao); 



        //get registroDeComprimentoDeOS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline RegistroDeComprimentoDeOS * & get_registroDeComprimentoDeOS(); 



        //set registroDeComprimentoDeOS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_registroDeComprimentoDeOS(RegistroDeComprimentoDeOS * & registroDeComprimentoDeOS); 



};  //end class MensagemDeFinalizaçãoDeOS



#endif
