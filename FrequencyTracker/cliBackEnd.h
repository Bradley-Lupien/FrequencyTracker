//
// Created by Bradley on 5/31/22.
//

#ifndef FREQUENCYTRACKER_CLIBACKEND_H
#define FREQUENCYTRACKER_CLIBACKEND_H

class cliBackEnd
{
private:
    char[][35] commands =
            {
            //tr = top of range, mr = middle of range
            //CC = check call, CR = check raise
                "set cc freq tr",
                "set cc freq mr",
                "set cr freq tr",
                "set cr freq mr",
                "set cbet freq tr",
                "set cbet freq mr",
                "set board texture wet",
                "set board texture dry",
                "roll freq wet",
                "roll freq dry",
            };
    int cbetTR;
    int cbetMR;
    int trCCFreq;
    int mrCCFreq;
    int trCRFreq;
    int mrCRFreq;
    bool wetBoardTexture;
public:
    cliBackEnd();
    ~cliBackEnd();

    void compareInputToCommandList(char[] input, char[][] commandList);
    void setCCFreqTR(int freq);
    void setCCFreqMR(int freq);
    void setCRFreqTR(int freq);
    void setCRFreqMR(int freq);
    void setCBFreqTR(int freq);
    void setCBFreqMR(int freq);
    void setBoardTexture(bool boardTexture);

    int  getCbetTR();
    int  getCbetMR();
    int  getTrCCFreq();
    int  getMrCCFreq();
    int  getTrCRFreq();
    int  getMrCRFreq();
    bool getBoardTexture();

};

#endif //FREQUENCYTRACKER_CLIBACKEND_H
