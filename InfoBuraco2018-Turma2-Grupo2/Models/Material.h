#ifndef MATERIAL_H
#define MATERIAL_H
//Begin section for file Material.h
//TODO: Add definitions that you want preserved
//End section for file Material.h


class PlanoSaida; //Dependency Generated Source:Material Target:PlanoSaida





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Material
{

    //Begin section for Material
    //TODO: Add attributes that you want preserved
    //End section for Material

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * nome;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float custoUnidade;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * unidade;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        PlanoSaida * planoSaida;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Material(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Material(); 



        //get nome
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline const char * & get_nome(); 



        //get custoUnidade
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline float & get_custoUnidade(); 



        //set custoUnidade
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_custoUnidade(float & custoUnidade); 



        //get unidade
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline const char * & get_unidade(); 



        //get planoSaida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline PlanoSaida * & get_planoSaida(); 



        //set planoSaida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_planoSaida(PlanoSaida * & planoSaida); 



};  //end class Material



#endif
