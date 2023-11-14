#include <iostream>
#include <string>
using namespace std;

class ElementaryParticle {
public:
    std::string particleName;
    double particleMass;
    bool isBoson;

    // Konstruktor
    ElementaryParticle(std::string name, double mass, bool boson) : particleName(name), particleMass(mass), isBoson(boson) {}

    // Javna funkcija za ispis informacija o čestici
    void printInfo() {
        std::cout << "Particle Name: " << particleName << std::endl;
        std::cout << "Particle Mass: " << particleMass << " GeV" << std::endl;
        std::cout << "Is Boson: " << (isBoson ? "Yes" : "No") << std::endl;
    }
};
