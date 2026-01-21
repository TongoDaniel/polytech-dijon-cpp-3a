#ifndef INVENTAIRE_H
#define INVENTAIRE_H
#include <string>
#include <iostream>

class Inventaire{
public:
    Inventaire();    
    friend std::ostream& operator<<(std::ostream& os, const Inventaire& inv);


private:
    inline static int count = 0;
    std::string idInventaire_;
};



#endif // INVENTAIRE_H