#include "../include/salle.h"


Salle::Salle(const std::string& nom, TypeSalle t): nom_(nom), type_(t){
    idSalle_ = "S" + std::to_string(++count);
}

std::string Salle::nom() const{
    return nom_;
}

std::string Salle::typeName() const{
    if (type_ == TypeSalle::SALLE_COUR) return "Salle de cours";
    if (type_ == TypeSalle::SALLE_INFORMATIQUE) return "Salle informatique";
    if (type_ == TypeSalle::SALLE_TECHNIQUE) return "Salle technique";
    return "ERROR 404";
}

std::ostream& operator<<(std::ostream& os, const Salle& salle){
    os << "Salle ID: " << salle.idSalle_ << ", Nom: " << salle.nom_ << ", Type: " << salle.typeName();
    return os;
}