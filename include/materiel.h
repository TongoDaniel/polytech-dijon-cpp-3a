#ifndef MATERIEL_H
#define MATERIEL_H

#include <string>

class Materiel{
public:
    Materiel(const std::string& nom);
    std::string nom() const;


private:
    std::string nom_;
    // TypeDevice type_;
    // Emplacement localisation_;

};


#endif // MATERIEL_H