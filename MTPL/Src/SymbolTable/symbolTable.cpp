#include"symbolTable.hpp"
using namespace MTPL;

std::unique_ptr<symbolTable> globe_symbolTableInstance = nullptr;

std::unique_ptr<symbolTable> getInstance()
{
    if(MTPL::globe_symbolTableInstance == nullptr)
        MTPL::globe_symbolTableInstance = std::make_unique<symbolTable>();
    return move(MTPL::globe_symbolTableInstance);
}

symbolTable::~symbolTable()
{
    
}