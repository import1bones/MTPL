#include"lexicalAnalyzer.hpp"
using namespace MTPL;

std::unique_ptr<lexicalAnalyzer> globe_lexicalAnalyzerInstance = nullptr;


std::unique_ptr<lexicalAnalyzer> lexicalAnalyzer::getInstance()
{
    if(globe_lexicalAnalyzerInstance == nullptr)
        globe_lexicalAnalyzerInstance = std::make_unique<lexicalAnalyzer>();
    return move(globe_lexicalAnalyzerInstance);
}

lexicalAnalyzer::~lexicalAnalyzer()
{
}

