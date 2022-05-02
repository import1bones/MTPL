#include"lexicalAnalyzer.hpp"

std::unique_ptr<lexicalAnalyzer> globe_lexicalInstance = nullptr;


std::unique_ptr<lexicalAnalyzer> lexicalAnalyzer::getInstance()
{
    if(globe_lexicalInstance != nullptr) return move(globe_lexicalInstance);
    else globe_lexicalInstance = std::make_unique<lexicalAnalyzer>();
}

lexicalAnalyzer::~lexicalAnalyzer()
{
}

