#include "IronOre.hpp"
IronOre::IronOre(): ISmeltable("Iron"){
    this->id=5;
    this->name="IronOre";
}

SmeltResult IronOre::smelt(){
    return SmeltResult(this->id,this->getSmeltResult());
}