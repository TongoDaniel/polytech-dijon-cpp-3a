#include "../include/materiel.h"

Materiel::Materiel(const std::string& nom): nom_(nom){
}

std::string Materiel::nom() const{
    return nom_;
}