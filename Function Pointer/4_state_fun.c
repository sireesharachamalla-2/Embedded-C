/*State Machine Implementation
Implement a basic state machine (initState, runState, stopState, errorState) with each state represented by a separate function.
Use function pointers to transition between states based on user input or internal conditions.
*/
#include<stdio.h>
#include<stdlib.h>
typdedef enum{
    INIT,RUN,STOP,ERROR,EXIT
}State;

typedef State (*StateFunc)();
State initState()
{
    return RUN;
}
int main()
{
    StateFunc stateTable[]={initState, runState, stopState, errorState};
    State current=INIT;
}