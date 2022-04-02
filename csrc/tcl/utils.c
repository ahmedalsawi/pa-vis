#include <tcl.h>

void tcl_exec(char *command)
{
    Tcl_Interp *myinterp;
    int status;

    myinterp = Tcl_CreateInterp();
    status = Tcl_Eval(myinterp, command);
}