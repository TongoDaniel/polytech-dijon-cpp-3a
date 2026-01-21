#include "../include/gestion.h"

Gestion::Gestion(){}

Inventaire& Gestion::inventaire(){
    return inventaire_;
}
std::vector<Salle>& Gestion::salles(){
    return salles_;
}
std::vector<Materiel>& Gestion::materiels(){
    return materiels_;
}
void Gestion::addSalle(const Salle& salle){
    salles_.push_back(salle);
}
void Gestion::listSalles() const{
    for (const auto& salle : salles_){
        std::cout << salle << std::endl;
    }
}
void Gestion::listMaterielsBySalle(const std::string& idSalle) const{
    std::cout << "Materiels dans la salle " << idSalle << ":\n";
    for (const auto& materiel : materiels_){
        if (materiel.idLocation() == idSalle){
            std::cout << "\t-> " << materiel.nom() << " (ID: " << materiel.idLocation() << ")\n";
        }
    }
}
bool Gestion::salleExist(const std::string& idSalle){
    for (const auto& salle : salles_){
        if (salle.nom() == idSalle){
            return true;
        }
    }
    return false;
}

