#ifndef OOP_GOLDORE_HPP
#define OOP_GOLDORE_HPP

#include "ISmeltable.hpp"

class GoldOre:public ISmeltable{
private:
    int id;
    std::string name;
public:
    GoldOre();
    SmeltResult smelt() override;
};

#endif