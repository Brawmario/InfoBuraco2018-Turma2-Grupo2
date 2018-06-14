#ifndef RELATORIO_H
#define RELATORIO_H
//Begin section for file Relatorio.h
//TODO: Add definitions that you want preserved
//End section for file Relatorio.h


class RegistroDeComprimentoDeOS; //Dependency Generated Source:Relatorio Target:RegistroDeComprimentoDeOS





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Relatorio
{

    //Begin section for Relatorio
    //TODO: Add attributes that you want preserved
    //End section for Relatorio

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * tipo;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * texto;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        RegistroDeComprimentoDeOS * registroDeComprimentoDeOS;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Relatorio(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Relatorio(); 



        //get tipo
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline const char * & get_tipo(); 



        //get texto
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline const char * & get_texto(); 



        //get registroDeComprimentoDeOS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline RegistroDeComprimentoDeOS * & get_registroDeComprimentoDeOS(); 



        //set registroDeComprimentoDeOS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_registroDeComprimentoDeOS(RegistroDeComprimentoDeOS * & registroDeComprimentoDeOS); 



};  //end class Relatorio



#endif
