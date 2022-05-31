#ifndef CLIFRONTEND_H_INCLUDED
#define CLIFRONTEND_H_INCLUDED
#include <string>

class cliFrontEnd
{
private:
    std::string prompt = "FTKR >> ";
    bool running = true;
public:
    cliFrontEnd(std::string prompt);
    ~cliFrontEnd();
    void                     setPrompt(std::string prompt);
    std::string              getPrompt();
    void                     displayCLI();
    void                     getInput();
    void                     run();
};

#endif // CLIFRONTEND_H_INCLUDED
