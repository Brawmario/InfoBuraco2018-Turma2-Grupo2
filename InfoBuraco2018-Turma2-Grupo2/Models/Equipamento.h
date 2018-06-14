#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H
//Begin section for file Equipamento.h
//TODO: Add definitions that you want preserved
//End section for file Equipamento.h


class PlanoSaida; //Dependency Generated Source:Equipamento Target:PlanoSaida





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Equipamento
{

    //Begin section for Equipamento
    //TODO: Add attributes that you want preserved
    //End section for Equipamento

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * identificacao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float custo;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * dataFabricacao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        PlanoSaida * planoSaida;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipamento(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Equipamento(); 



        //get identificacao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline const char * & get_identificacao(); 



        //get custo
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline float & get_custo(); 



        //set custo
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_custo(float & custo); 



        //get dataFabricacao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline const char * & get_dataFabricacao(); 



        //get planoSaida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline PlanoSaida * & get_planoSaida(); 



        //set planoSaida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_planoSaida(PlanoSaida * & planoSaida); 



};  //end class Equipamento



#endif
