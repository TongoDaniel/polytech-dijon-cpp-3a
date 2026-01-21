#ifndef GESTION_H
#define GESTION_H

#include <vector>
#include "materiel.h"
#include "salle.h"

class Gestion{
public:
    Gestion();


private:
    // Inventaire inventaire_;
    std::vector<Salle> salles_;
    std::vector<Materiel> materiels_;
};

#endif // GESTION_H