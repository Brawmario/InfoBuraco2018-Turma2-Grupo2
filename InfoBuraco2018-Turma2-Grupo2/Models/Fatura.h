#ifndef FATURA_H
#define FATURA_H
//Begin section for file Fatura.h
//TODO: Add definitions that you want preserved
//End section for file Fatura.h


class RegistroDeComprimentoDeOS; //Dependency Generated Source:Fatura Target:RegistroDeComprimentoDeOS





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Fatura
{

    //Begin section for Fatura
    //TODO: Add attributes that you want preserved
    //End section for Fatura

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float valor;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * dataEmissao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        RegistroDeComprimentoDeOS * registroDeComprimentoDeOS;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Fatura(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Fatura(); 



        //get valor
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline float & get_valor(); 



        //set valor
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_valor(float & valor); 



        //get dataEmissao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline const char * & get_dataEmissao(); 



        //get registroDeComprimentoDeOS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline RegistroDeComprimentoDeOS * & get_registroDeComprimentoDeOS(); 



        //set registroDeComprimentoDeOS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_registroDeComprimentoDeOS(RegistroDeComprimentoDeOS * & registroDeComprimentoDeOS); 



};  //end class Fatura



#endif
