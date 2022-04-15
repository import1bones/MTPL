#include"lexicalAnalyzer.hpp"

std::unique_ptr<lexicalAnalyzer> globe_lexicalInstance = nullptr;

lexicalAnalyzer::lexicalAnalyzer(/* args */)
{
    if(globe_lexicalInstance == nullptr)
        globe_lexicalInstance = std::unique_ptr<lexicalAnalyzer>(new lexicalAnalyzer);
}



lexicalAnalyzer::~lexicalAnalyzer()
{
}

