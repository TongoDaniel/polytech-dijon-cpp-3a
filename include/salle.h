#ifndef SALLE_H
#define SALLE_H

#include <string>
#include <iostream>

enum class TypeSalle {
    SALLE_COUR,
    SALLE_INFORMATIQUE,
    SALLE_TECHNIQUE,
};

class Salle{
public:
    Salle(const std::string& nom, TypeSalle t);
    std::string nom() const;
    std::string typeName() const;

    
    friend std::ostream& operator<<(std::ostream& os, const Salle& salle);

private:
    inline static int count = 0;
    std::string idSalle_;
    std::string nom_;
    TypeSalle type_;

};




#endif // SALLE_H