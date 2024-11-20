#include <iostream>
#include <vector>
#include "dog.hpp"
#include "cat.hpp"

int main() {
    std::vector<Pet*> pvec;

    pvec.push_back(new Dog("Bob", 65));
    pvec.push_back(new Dog("Stan", 37));
    pvec.push_back(new Cat("Tom", 12));

    float total_fee = 0.0;
    for (int i = 0; i < pvec.size(); i++) {
        std::cout << pvec[i]->GetName() << ' ' << pvec[i]->CalculateFee() << std::endl;
        total_fee += pvec[i]->CalculateFee();
    }

    std::cout << "total licensing fee = " << total_fee << std::endl;

    

    return 0;
}
