#include "RedstoneOre.hpp"
RedstoneOre::RedstoneOre(): ISmeltable("Redstone"){
    this->id=7;
    this->name="RedstoneOre";
}

SmeltResult RedstoneOre::smelt(){
    return SmeltResult(this->id,this->getSmeltResult());
}