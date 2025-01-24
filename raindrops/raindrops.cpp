#include "raindrops.h"

namespace raindrops {
     
    std::string convert(int inputNumber){
        std::string result = "";
        if (inputNumber % 3 == 0){
                result += "Pling";    
        }
        if (inputNumber % 5 == 0){
                result += "Plang";
        }
        if (inputNumber % 7 == 0){
                result += "Plong";
        }
        if (inputNumber % 3 != 0 && inputNumber % 5 != 0 && inputNumber % 7 != 0){

            result += std::to_string(inputNumber);
       }
        return result;
    }
}  // namespace raindrops
