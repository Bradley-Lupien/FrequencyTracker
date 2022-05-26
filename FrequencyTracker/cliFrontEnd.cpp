#include "cliFrontEnd.h"
#include <iostream>
#include <vector>

cliFrontEnd::cliFrontEnd(std::string prompt, char* title)
{
    this->prompt = prompt;
    this->title = title;
}

char* cliFrontEnd::getPrompt()                     {return this->prompt;}
std::string cliFrontEnd::getTitle()                {return this->title;}
void cliFrontEnd::setPrompt(std::string newPrompt) {this->prompt = newPrompt;}

std::vector<std::string> cliFrontEnd::parseCommand(string cmd)
{
    std::string tmp;
    stringstream ss(cmd);
    std::vector<std::string> words;

    while(getline(ss, tmp, " "))
    {
        words.push_back(tmp);
    }
}
