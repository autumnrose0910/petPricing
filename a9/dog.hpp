#ifndef dog.hpp
#define dog.hpp

#include "pet.hpp"

class Dog : public Pet {
private:
    std:: string name;
    float weight;
    static constexpr float licensingRate = 2.0f; 

public:
    Dog(const std::string& name, float weight) : name(name), weight(weight) {}
    
    std:: string GetName() const override {
        return name;
    }

    float CalculateFee() const override {
        return weight * licensingRate;
    }
};

#endif 
