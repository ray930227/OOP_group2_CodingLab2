#include <iostream>
#include "SmeltResult.hpp"
#include "StackFurnace.hpp"
#include "CoalOre.hpp"
#include "CopperOre.hpp"
#include "DiamondOre.hpp"
#include "EmeraldOre.hpp"
#include "GoldOre.hpp"
#include "IronOre.hpp"
#include "LapisLazuliOre.hpp"
#include "RedstoneOre.hpp"
#include "RawBeef.hpp"

int main(){
    StackFurnace stackFurnace;
    stackFurnace.AddItem(std::make_shared<CoalOre>());
    stackFurnace.AddItem(std::make_shared<CopperOre>());
    stackFurnace.AddItem(std::make_shared<DiamondOre>());
    stackFurnace.AddItem(std::make_shared<EmeraldOre>());
    stackFurnace.AddItem(std::make_shared<GoldOre>());
    stackFurnace.AddItem(std::make_shared<IronOre>());
    stackFurnace.AddItem(std::make_shared<LapisLazuliOre>());
    stackFurnace.AddItem(std::make_shared<RedstoneOre>());
    stackFurnace.AddItem(std::make_shared<RawBeef>());

    while(stackFurnace.Size()>0){
        SmeltResult result=stackFurnace.SmeltItem();
        std::cout<<"Get:"<<result.GetName()<<std::endl;
        std::cout<<"Size:"<<stackFurnace.Size()<<std::endl;
    }
}