#ifndef CLIFRONTEND_H_INCLUDED
#define CLIFRONTEND_H_INCLUDED
#include <string>

class cli
{
private:

    std::shared_ptr<cliBackEnd> backEnd;
    char[][35] commands =
            {
                    //tr = top of range, mr = middle of range
                    //CC = check call, CR = check raise
                    "help",
                    "set cc freq tr",
                    "set cc freq mr",
                    "set cr freq tr",
                    "set cr freq mr",
                    "set cbet freq tr",
                    "set cbet freq mr",
                    "set board texture wet",
                    "set board texture dry",
                    "roll freq wet",
                    "roll freq dry"
            };
    std::string prompt = "FTKR >> ";
    bool running = true;
    int cbetTR;
    int cbetMR;
    int trCCFreq;
    int mrCCFreq;
    int trCRFreq;
    int mrCRFreq;
    bool wetBoardTexture;
public:
    cli(std::string prompt);
    ~cli();


    int                      compareInputToCommandList(char* input, char[][] commandList);
    void                     executeCommand(int cmdIndex);
    void                     setCCFreqTR(int freq);
    void                     setCCFreqMR(int freq);
    void                     setCRFreqTR(int freq);
    void                     setCRFreqMR(int freq);
    void                     setCBFreqTR(int freq);
    void                     setCBFreqMR(int freq);
    void                     setBoardTexture(bool boardTexture);

    int                      getCbetTR();
    int                      getCbetMR();
    int                      getTrCCFreq();
    int                      getMrCCFreq();
    int                      getTrCRFreq();
    int                      getMrCRFreq();
    bool                     getBoardTexture();
    void                     roll(bool wetBoardTexture);
    void                     setPrompt(std::string prompt);
    std::string              getPrompt();
    void                     displayCLI();
    char*                    getInput(char* returnInput);
    void                     run();
};

#endif // CLIFRONTEND_H_INCLUDED
