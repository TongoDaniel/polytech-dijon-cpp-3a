#include "../include/materiel.h"

Materiel::Materiel(const std::string& nom, TypeDevice t): nom_(nom), type_(t){
    idMateriel_ = "M" + std::to_string(++count);
}

std::string Materiel::nom() const{
    return nom_;
}

std::string Materiel::type(){
    if (type_ == TypeDevice::POSTE_TRAVAIL) return "Poste de travail";
    if (type_ == TypeDevice::PETIT_MATERIEL) return "Petit materiel";
    if (type_ == TypeDevice::ECRAN) return "Ecran";
    if (type_ == TypeDevice::CONNECTIQUE) return "Connectique";
    if (type_ == TypeDevice::MATERIEL_RESEAU) return "Materiel reseau";
    if (type_ == TypeDevice::MATERIEL_SPECIFIQUE) return "Materiel specifique";
    return "ERROR 404";
}