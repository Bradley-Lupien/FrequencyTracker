#include "cli.h"

using namespace std;

int main()
{
    cli* commandLine = new cli("FTKR >> ");
    cli->run();
    return 0;
}
