#ifndef GESTION_H
#define GESTION_H

#include <vector>
#include "materiel.h"
#include "inventaire.h"
#include "salle.h"

class Gestion{
public:
    Gestion();
    Inventaire& inventaire();
    std::vector<Salle>& salles();
    std::vector<Materiel>& materiels();

    void addSalle(const Salle& salle);
    void listSalles() const;
    void listMaterielsBySalle(const std::string& idSalle) const;
    bool salleExist(const std::string& idSalle);
    



private:
    Inventaire inventaire_;
    std::vector<Salle> salles_;
    std::vector<Materiel> materiels_;
};

#endif // GESTION_H