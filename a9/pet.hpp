#ifndef pet.hpp
#define pet.hpp

#include <string>

class Pet {
public:
    virtual ~Pet() {}
    virtual std::string GetName() const = 0;
    virtual float CalculateFee() const = 0;
};

#endif 
