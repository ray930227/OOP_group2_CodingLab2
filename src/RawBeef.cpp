#include "RawBeef.hpp"
#include <iostream>

RawBeef::RawBeef(): ISmeltable("Steak"){
    this->id=8;
    this->name="RawBeef";
}

SmeltResult RawBeef::smelt(){
    std::cout<<"smell good!\n";
    return SmeltResult(this->id,this->getSmeltResult());
}