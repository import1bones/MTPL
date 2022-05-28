#ifndef MTPL_SRC_LEXICAL_ANALYZER
#define MTPL_SRC_LEXICAL_ANALYZER
#include<memory>
#include "../Lib/token.hpp"

namespace MTPL
{
    class lexicalAnalyzer
    {
    private:
        /* data */
    public:
        //default
        ~lexicalAnalyzer();
        //custom
        static std::unique_ptr<lexicalAnalyzer> getInstance();
        std::shared_ptr<MTPL::token> getNextToken();
    };

    extern std::unique_ptr<lexicalAnalyzer> globe_lexicalAnalyzerInstance;
};
#endif //MTPL_SRC_LEXICAL_ANALYZER