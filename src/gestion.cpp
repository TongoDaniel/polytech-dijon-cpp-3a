#include "../include/gestion.h"

Gestion::Gestion(){}

Inventaire& Gestion::inventaire(){
    return inventaire_;
}
std::vector<Salle>& Gestion::salles(){
    return salles_;
}

