#ifndef OOP_FURNACE_HPP

#include <vector>
#include <memory>
#include "ISmeltable.hpp"

class StackFurnace{
private:
    std::vector<std::shared_ptr<ISmeltable>> result;
public:
    StackFurnace() = default;
    StackFurnace(std::vector<std::shared_ptr<ISmeltable>> result){
        this->result = result;
    }
    void AddItem(std::shared_ptr<ISmeltable> item){
        result.push_back(item);
    }
    std::shared_ptr<ISmeltable> PopItem(){
        std::shared_ptr<ISmeltable> item = result.back();
        result.pop_back();
        return item;
    }
    SmeltResult SmeltItem(){
        std::shared_ptr<ISmeltable> item = PopItem();
        return item->smelt();
    }
    int Size(){
        return result.size();
    }
};

#define OOP_FURNACE_HPP

#endif // OOP_FURNACE_HPP
