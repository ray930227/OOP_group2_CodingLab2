#include "EmeraldOre.hpp"
EmeraldOre::EmeraldOre(): ISmeltable("Emerald"){
    this->id=3;
    this->name="EmeraldOre";
}

SmeltResult EmeraldOre::smelt(){
    return SmeltResult(this->id,this->getSmeltResult());
}