#ifndef MENSAGEMDEFINALIZA��ODEOS_H
#define MENSAGEMDEFINALIZA��ODEOS_H
//Begin section for file MensagemDeFinaliza��oDeOS.h
//TODO: Add definitions that you want preserved
//End section for file MensagemDeFinaliza��oDeOS.h

#include<string>

class Reclamacao; //Dependency Generated Source:MensagemDeFinaliza��oDeOS Target:Reclamacao


class RegistroDeComprimentoDeOS; //Dependency Generated Source:MensagemDeFinaliza��oDeOS Target:RegistroDeComprimentoDeOS





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class MensagemDeFinaliza��oDeOS
{

    //Begin section for MensagemDeFinaliza��oDeOS
    //TODO: Add attributes that you want preserved
    //End section for MensagemDeFinaliza��oDeOS

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
        MensagemDeFinaliza��oDeOS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~MensagemDeFinaliza��oDeOS(); 



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



};  //end class MensagemDeFinaliza��oDeOS



#endif
