#ifndef OOP_COPPERORE_HPP
#define OOP_COPPERORE_HPP

#include "ISmeltable.hpp"

class CopperOre:public ISmeltable{
private:
    int id;
    std::string name;
public:
    CopperOre();
    SmeltResult smelt() override;
};

#endif