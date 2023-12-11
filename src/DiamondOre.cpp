#include "DiamondOre.hpp"
DiamondOre::DiamondOre(): ISmeltable("Diamond"){
    this->id=2;
    this->name="DiamondOre";
}

SmeltResult DiamondOre::smelt(){
    return SmeltResult(this->id,this->getSmeltResult());
}