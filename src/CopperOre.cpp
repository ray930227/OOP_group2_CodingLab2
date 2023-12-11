#include "CopperOre.hpp"
CopperOre::CopperOre(): ISmeltable("Copper"){
    this->id=1;
    this->name="CopperOre";
}

SmeltResult CopperOre::smelt(){
    return SmeltResult(this->id,this->getSmeltResult());
}