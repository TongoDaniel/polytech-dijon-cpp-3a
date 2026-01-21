#ifndef MATERIEL_H
#define MATERIEL_H

#include <string>

enum class TypeDevice {
    POSTE_TRAVAIL,
    PETIT_MATERIEL,
    ECRAN,
    CONNECTIQUE,
    MATERIEL_RESEAU,
    MATERIEL_SPECIFIQUE
};

class Materiel{
public:
    Materiel(const std::string& nom, TypeDevice t);
    std::string nom() const;
    std::string type();

private:
    inline static int count = 0;
    std::string idMateriel_;
    std::string nom_;
    TypeDevice type_;
    // Emplacement localisation_;

};


#endif // MATERIEL_H