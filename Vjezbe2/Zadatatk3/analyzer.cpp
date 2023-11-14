#include<iostream>
#include "ElementaryParticle.cpp"
int main() {

    // A. Kreiranje objekata za Higgsov bozon i top kvark
    ElementaryParticle higgsBoson("Higgs Boson", 125.1, true);
    ElementaryParticle topQuark("Top Quark", 173.1, false);

    // Ispis informacija o Higgsovom bozonu i top kvarku
    higgsBoson.printInfo();
    std::cout << "-----------------------------" << std::endl;
    topQuark.printInfo();
    std::cout << "-----------------------------" << std::endl;

    ElementaryParticle *zBosonPtr;
    ElementaryParticle *zBosonPtrWithConstructor = new ElementaryParticle("Z Boson", 91.2, true);
    zBosonPtrWithConstructor->printInfo();



   
}
