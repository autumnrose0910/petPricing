#ifndef cat.hpp
#define cat.hpp

#include "pet.hpp"

class Cat : public Pet {
private:
    std::string name;
    float weight;
    static constexpr float licensingRate = 1.5f;

public:
    Cat(const std::string& name, float weight) : name(name), weight(weight) {}
    
    std::string GetName() const override {
        return name;
    }

    float CalculateFee() const override {
        return weight * licensingRate;
    }
};

#endif 
