#ifndef OOP_IRONORE_HPP
#define OOP_IRONORE_HPP

#include "ISmeltable.hpp"

class IronOre:public ISmeltable{
private:
    int id;
    std::string name;
public:
    IronOre();
    SmeltResult smelt() override;
};

#endif