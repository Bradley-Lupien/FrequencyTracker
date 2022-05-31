#include "cliFrontEnd.h"
#include <iostream>
#include <string.h>

#define MAX_INPUT_SIZE 50

cliFrontEnd::cliFrontEnd(std::string prompt)
{
    this->prompt = prompt;
}

std::string cliFrontEnd::getPrompt()               {return this->prompt;}
void cliFrontEnd::setPrompt(std::string newPrompt) {this->prompt = newPrompt;}
void cliFrontEnd::displayCLI()                     {std::cout << this->getPrompt();}

void cliFrontEnd::getInput()
{
    displayCLI();
    char input[MAX_INPUT_SIZE];
    std::cin.getline(input, MAX_INPUT_SIZE - 1);
    std::cout << "Input was: " << input << std::endl;
    if(strncmp(input, "quit", MAX_INPUT_SIZE) == 0)
    {
        running = false;
    }
}

void cliFrontEnd::run()
{
    while(running)
    {
        getInput();
    }
    std::cout << "\r\nThanks for using Frequency Tracker. \r\nGoodbye!\r\n" << std::endl;
}