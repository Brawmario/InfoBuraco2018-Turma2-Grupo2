#ifndef PLANOSAIDA_H
#define PLANOSAIDA_H
//Begin section for file PlanoSaida.h
//TODO: Add definitions that you want preserved
//End section for file PlanoSaida.h

#include<string>

class OS; //Dependency Generated Source:PlanoSaida Target:OS


class Equipamento; //Dependency Generated Source:PlanoSaida Target:Equipamento


class Equipe; //Dependency Generated Source:PlanoSaida Target:Equipe


class Material; //Dependency Generated Source:PlanoSaida Target:Material


class RegistroDeComprimentoDeOS; //Dependency Generated Source:PlanoSaida Target:RegistroDeComprimentoDeOS





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class PlanoSaida
{

    //Begin section for PlanoSaida
    //TODO: Add attributes that you want preserved
    //End section for PlanoSaida

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string data;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OS * oS;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipamento * equipamento;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipe * equipe;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Material * material;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        RegistroDeComprimentoDeOS * registroDeComprimentoDeOS;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        PlanoSaida(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~PlanoSaida(); 



        //get data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline std::string & get_data(); 



        //get oS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline OS * & get_oS(); 



        //set oS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_oS(OS * & oS); 



        //get equipamento
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Equipamento * & get_equipamento(); 



        //set equipamento
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_equipamento(Equipamento * & equipamento); 



        //get equipe
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Equipe * & get_equipe(); 



        //set equipe
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_equipe(Equipe * & equipe); 



        //get material
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Material * & get_material(); 



        //set material
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_material(Material * & material); 



        //get registroDeComprimentoDeOS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline RegistroDeComprimentoDeOS * & get_registroDeComprimentoDeOS(); 



        //set registroDeComprimentoDeOS
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_registroDeComprimentoDeOS(RegistroDeComprimentoDeOS * & registroDeComprimentoDeOS); 



};  //end class PlanoSaida



#endif
