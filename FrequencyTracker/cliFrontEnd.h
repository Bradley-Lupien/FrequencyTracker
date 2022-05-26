#ifndef CLIFRONTEND_H_INCLUDED
#define CLIFRONTEND_H_INCLUDED
#include <vector>

class cliFrontEnd
{
private:
    std::string prompt = "FTKR >> ";
    char* title = "Frequency Tracker";
public:
    cliFrontEnd(std::string prompt, char* title);
    ~cliFrontEnd();
    std::vector<std::string> parseCommand(std::string cmd);
    void                     setPrompt(std::string prompt);
    std::string              getPrompt();
    char*                    getTitle();
};

#endif // CLIFRONTEND_H_INCLUDED
