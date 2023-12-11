#include "CoalOre.hpp"

CoalOre::CoalOre(): ISmeltable("Coal"){
    this->id=0;
    this->name="CoalOre";
}

SmeltResult CoalOre::smelt(){
    return SmeltResult(this->id,this->getSmeltResult());
}