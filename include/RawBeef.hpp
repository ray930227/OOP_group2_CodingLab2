#ifndef OOP_RAWBEEF_HPP
#define OOP_RAWBEEF_HPP

#include "ISmeltable.hpp"

class RawBeef:public ISmeltable{
private:
    int id;
    std::string name;
public:
    RawBeef();
    SmeltResult smelt() override;
};

#endif