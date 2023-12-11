#ifndef OOP_DIAMONDORE_HPP
#define OOP_DIAMONDORE_HPP

#include "ISmeltable.hpp"

class DiamondOre:public ISmeltable{
private:
    int id;
    std::string name;
public:
    DiamondOre();
    SmeltResult smelt() override;
};

#endif