#include <iostream>
#include "../include/gestion.h"


int main(){
    Materiel materiel1("Souris", static_cast<TypeDevice>(1));
    std::cout << materiel1.nom() << std::endl;
    std::cout << materiel1.type() << std::endl;

    Salle salle1("Salle 101", static_cast<TypeSalle>(0));
    std::cout << salle1 << std::endl;
    
    // type = new PosteDeTravail("Ubuntu");
    // std::cout << type << std::endl;


/*     int input=-1;
    while(input != 0){
        std::cout << "***************************************" << std::endl;
        std::cout << "*\tBienvenue chez LeinInv:           *" << std::endl;
        std::cout << "***************************************" << std::endl;
        
        std::cout << "->Inventaire" << std::endl;
        std::cout << "\t11. Liste des materiels de l'inventaire" << std::endl;

        std::cout << "->Materiel" << std::endl;
        std::cout << "\t21. Liste des materiels" << std::endl;
        std::cout << "\t22. Ajout d'un materiel" << std::endl;
        std::cout << "\t23. Deplacer un materiel" << std::endl;

        std::cout << "->Salle" << std::endl;
        std::cout << "\t31. Liste des salles" << std::endl;
        std::cout << "\t32. Ajout d'une salle" << std::endl;
        std::cout << "\t33. Afficher les materiels d'une salle" << std::endl;

        std::cout << "0. Exit" << std::endl;
        std::cout << "Choisissez une option: ";
        std::cin >> input;
        std::cout << std::endl;
        

    }
     */
    return 0;
}