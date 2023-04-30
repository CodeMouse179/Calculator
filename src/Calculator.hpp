#define SYSTEM_STRING_CONSOLE
#include "String.hpp"

namespace CodeMouse
{
    enum class CalculationResult
    {
        Success = 0,
        Fail = 1,
    };

    class Calculator
    {
    public:
        static bool PreProcess(const std::string& expression)
        {
            if (StringA::IsNullOrWhiteSpace(expression))
            {
                return false;
            }
            return true;
        }

        static std::string Process(const std::string& expression, CalculationResult& calcRet)
        {
            std::string result;
            calcRet = CalculationResult::Success;
            return result;
        }
    };
}