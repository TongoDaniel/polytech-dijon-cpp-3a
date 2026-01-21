#include <iostream>
#include "../include/gestion.h"


int main(){
    Gestion LeinInv;
    int typeSalle;
    std::string nomSalle, idSalle;
    std::cout << LeinInv.inventaire() << std::endl;

    Materiel materiel1("Souris", static_cast<TypeDevice>(1));

    Salle salle1("Salle 101", static_cast<TypeSalle>(0));
    Salle salle2("Salle 102", static_cast<TypeSalle>(1));
    Salle salle3("Salle 103", static_cast<TypeSalle>(2));
    Salle salle4("Salle 104", static_cast<TypeSalle>(2));
    Salle salle5("Salle 105", static_cast<TypeSalle>(1));
    Salle salle6("Salle 106", static_cast<TypeSalle>(0));
    LeinInv.addSalle(salle1);
    LeinInv.addSalle(salle2);
    LeinInv.addSalle(salle3);
    LeinInv.addSalle(salle4);
    LeinInv.addSalle(salle5);
    LeinInv.addSalle(salle6);


    int input=-1;
    std::cout << "\n***************************************" << std::endl;
    std::cout << "*\tBienvenue chez LeinInv:           *" << std::endl;
    std::cout << "***************************************" << std::endl;
        
    while(input != 0){
        std::cout << "\n\t\tMenu" << std::endl;
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

        
        switch(input)
        {
            case 31:
                {
                    std::cout << "Liste des salles:\n";
                    LeinInv.listSalles();
                }
                break;
        
            case 32:
                {
                    std::cout << "Quel type de salle voulez-vous ajouter ?:\n";
                    std::cout << "\t1. Salle de cours" << std::endl;
                    std::cout << "\t2. Salle informatique" << std::endl;
                    std::cout << "\t3. Salle technique" << std::endl;
                    std::cin >> typeSalle;
                    std::cout << "Veuillez saisir le nom de la salle: ";
                    std::cin >> nomSalle;
                    if(typeSalle < 1 || typeSalle > 3){
                        std::cout << "Type de salle invalide. Opération annulée.\n";
                        break;
                    }
                    LeinInv.addSalle(Salle(nomSalle, static_cast<TypeSalle>(typeSalle - 1)));
                    std::cout << "Salle ajoutée avec succès!\n";

                }
                break;

            case 33:
                {
                    std::cout << "Veuillez saisir l'ID de la salle: ";
                    std::cin >> idSalle;
                    if (LeinInv.salleExist(idSalle)) {
                        LeinInv.listMaterielsBySalle(idSalle);
                    } else {
                        std::cout << "Salle avec l'ID " << idSalle << " n'existe pas.\n";
                    }
                }
            
            default:
                std::cout << "Option invalide. Veuillez réessayer." << std::endl;
                break;
        }
        

    }
    
    
     return 0;
}