#ifndef MTPL_SRC_SYMBOL_TABLE
#define MTPL_SRC_SYMBOL_TABLE
#include<memory>

namespace MTPL
{
    class symbolTable
    {
    private:
        /* data */
    public:   
        static std::unique_ptr<symbolTable> getInstance();
        ~symbolTable();
    };

    extern std::unique_ptr<symbolTable> globe_symbolTableInstance;
};



#endif //MTPL_SRC_SYMBOL_TABLE