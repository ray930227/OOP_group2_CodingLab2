#ifndef OOP_COALORE_HPP
#define OOP_COALORE_HPP

#include "ISmeltable.hpp"

class CoalOre:public ISmeltable{
private:
    int id;
    std::string name;
public:
    CoalOre();
    SmeltResult smelt() override;
};

#endif