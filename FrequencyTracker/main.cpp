#include "cliFrontEnd.h"

using namespace std;

int main()
{
    cliFrontEnd* cli = new cliFrontEnd("PTKR >> ");
    cli->run();
    return 0;
}
