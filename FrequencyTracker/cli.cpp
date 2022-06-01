#include "cli.h"
#include <iostream>
#include <string.h>

#define MAX_INPUT_SIZE 50

cli::cli(std::string prompt)
{
    this->prompt = prompt;
}

std::string cli::getPrompt()               {return this->prompt;}
void cli::setPrompt(std::string newPrompt) {this->prompt = newPrompt;}
void cli::displayCLI()                     {std::cout << this->getPrompt();}

void cli::getInput()
{
    displayCLI();
    char input[MAX_INPUT_SIZE];
    std::cin.getline(input, MAX_INPUT_SIZE - 1);
    std::cout << "DEBUG[+] Input was: " << input << std::endl;
    if(strncmp(input, "quit", MAX_INPUT_SIZE) == 0)
    {
        running = false;
    }
}

void cli::run()
{
    while(running)
    {
        getInput();
    }
    std::cout << "\r\nThanks for using Frequency Tracker. \r\nGoodbye!\r\n" << std::endl;
}

cli::~cli()
{
    delete backEnd1;
}

int cli::compareInputToCommandList(char* input, char[][] commandList)
{
    int cmdSize = sizeof(commandList) / sizeof(commandList[0]);
    for(i = 0; i < cmdSize; i++)
    {
        for(char[] cmd : commandlist)
        {
            if(strncmp(input, cmd, 50) == 0)
            {
                return i;
            }
        }
        return -1;
    }
}
void cli::executeCommand(int cmdIndex)
{
    switch ((cmdIndex))
    {
        case 1:

    }
}
void cli::setCCFreqTR(int freq) {this->trCCFreq = freq;}
void cli::setCCFreqMR(int freq) {this->mrCCFreq = freq;}
void cli::setCRFreqTR(int freq) {this->trCRFreq = freq;}
void cli::setCRFreqMR(int freq) {this->mrCRFreq = freq;}
void cli::setCBFreqTR(int freq) {this->cbetTR = freq;}
void cli::setCBFreqMR(int freq) {}
void cli::setBoardTexture(bool boardTexture);

int  cli::getCbetTR();
int  cli::getCbetMR();
int  cli::getTrCCFreq();
int  cli::getMrCCFreq();
int  cli::getTrCRFreq();
int  cli::getMrCRFreq();
bool cli::getBoardTexture();

void cliBackEnd::roll(bool wetBoardTexture);