#ifndef OOP_ISMELTABLE_HPP
#define OOP_ISMELTABLE_HPP

#include "SmeltResult.hpp"

class ISmeltable{
private:
    std::string smeltResult;
public:
    ISmeltable(std::string smeltResult){
        this->smeltResult=smeltResult;
    }
    std::string getSmeltResult(){
        return this->smeltResult;
    };
    virtual SmeltResult smelt()=0;
};

#endif