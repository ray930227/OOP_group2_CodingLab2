#include "GoldOre.hpp"
GoldOre::GoldOre(): ISmeltable("Gold"){
    this->id=4;
    this->name="GoldOre";
}

SmeltResult GoldOre::smelt(){
    return SmeltResult(this->id,this->getSmeltResult());
}