#include "LapisLazuliOre.hpp"
LapisLazuliOre::LapisLazuliOre(): ISmeltable("LapisLazuli"){
    this->id=6;
    this->name="LapisLazuliOre";
}

SmeltResult LapisLazuliOre::smelt(){
    return SmeltResult(this->id,this->getSmeltResult());
}