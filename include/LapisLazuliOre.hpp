#ifndef OOP_LAPISLAZULIORE_HPP
#define OOP_LAPISLAZULIORE_HPP

#include "ISmeltable.hpp"

class LapisLazuliOre:public ISmeltable{
private:
    int id;
    std::string name;
public:
    LapisLazuliOre();
    SmeltResult smelt() override;
};

#endif