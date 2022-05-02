#ifndef MTPL_SRC_SYMBOL_TABLE
#define MTPL_SRC_SYMBOL_TABLE
#include<memory>

class symbolTable
{
private:
    /* data */
public:   
    static std::unique_ptr<symbolTable> getInstance();
    ~symbolTable();
};

#endif //MTPL_SRC_SYMBOL_TABLE