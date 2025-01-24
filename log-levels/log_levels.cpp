#include <string>

namespace log_line {
    std::string message(std::string line) {
        // return the message
        int errorPos = line.find(":");
        return line.substr(errorPos+2);
        
    }

    std::string log_level(std::string line) {
        // return the log level
        int errorPos = line.find(":");
        return line.substr(1, errorPos-2);
       
    }

    std::string reformat(std::string line) {
        // return the reformatted message
        int errorPos = line.find(":");
        return line.substr(errorPos+2) + " (" + line.substr(1, errorPos-2) + ")";
    }
}
