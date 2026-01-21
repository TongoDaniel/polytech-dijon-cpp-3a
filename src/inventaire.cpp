#include "../include/inventaire.h"
Inventaire::Inventaire(){
    idInventaire_ = "I" + std::to_string(++count);
}


std::ostream& operator<<(std::ostream& os, const Inventaire& inv){
    os << "Inventaire ID: " << inv.idInventaire_;
    return os;
}