#ifndef MTPL_SRC_LEXICAL_ANALYZER
#define MTPL_SRC_LEXICAL_ANALYZER
#include<memory>

class lexicalAnalyzer
{
private:
    /* data */
public:
    static std::unique_ptr<lexicalAnalyzer> getInstance();
    ~lexicalAnalyzer();
};

std::unique_ptr<lexicalAnalyzer> globe_lexicalInstance;


#endif //MTPL_SRC_LEXICAL_ANALYZER