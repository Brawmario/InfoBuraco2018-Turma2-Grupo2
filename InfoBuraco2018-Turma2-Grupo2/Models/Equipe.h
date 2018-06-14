#ifndef EQUIPE_H
#define EQUIPE_H
//Begin section for file Equipe.h
//TODO: Add definitions that you want preserved
//End section for file Equipe.h


class PlanoSaida; //Dependency Generated Source:Equipe Target:PlanoSaida





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Equipe
{

    //Begin section for Equipe
    //TODO: Add attributes that you want preserved
    //End section for Equipe

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int numeroProfissionais;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * nome;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float custoHora;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        PlanoSaida * planoSaida;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipe(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Equipe(); 



        //get numeroProfissionais
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline int & get_numeroProfissionais(); 



        //set numeroProfissionais
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_numeroProfissionais(int & numeroProfissionais); 



        //get nome
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline const char * & get_nome(); 



        //get custoHora
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline float & get_custoHora(); 



        //set custoHora
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_custoHora(float & custoHora); 



        //get planoSaida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline PlanoSaida * & get_planoSaida(); 



        //set planoSaida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_planoSaida(PlanoSaida * & planoSaida); 



};  //end class Equipe



#endif
