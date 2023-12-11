#ifndef OOP_REDSTONEORE_HPP
#define OOP_REDSTONEORE_HPP

#include "ISmeltable.hpp"

class RedstoneOre:public ISmeltable{
private:
    int id;
    std::string name;
public:
    RedstoneOre();
    SmeltResult smelt() override;
};

#endif