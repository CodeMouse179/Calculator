#include "Calculator.hpp"

int main()
{
    while(true)
    {
        std::string expression = Console::ReadLine();
        bool suc = CodeMouse::Calculator::PreProcess(expression);
        if (!suc)
        {
            Console::WriteLine(TEXT("wrong"));
            continue;
        }
        if (StringA::Equals(expression, "exit"))
        {
            break;
        }
        CodeMouse::CalculationResult cr;
        std::string result = CodeMouse::Calculator::Process(expression, cr);
        if (cr == CodeMouse::CalculationResult::Success)
        {
            Console::WriteLine(result);
        }
        else if (cr == CodeMouse::CalculationResult::Fail)
        {
            Console::WriteLine(result);
        }
    }
    return 0;
}