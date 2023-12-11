#ifndef OOP_EMERALDORE_HPP
#define OOP_EMERALDORE_HPP

#include "ISmeltable.hpp"

class EmeraldOre:public ISmeltable{
private:
    int id;
    std::string name;
public:
    EmeraldOre();
    SmeltResult smelt() override;
};

#endif