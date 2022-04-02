#include <tcl.h>

static int create_power_doamin(ClientData cdata, Tcl_Interp *interp, int objc, Tcl_Obj *const objv[])
{
    printf("Hello World\n");
    return TCL_OK;
}

int upf_commands_Init(Tcl_Interp *interp)
{
    Tcl_CreateObjCommand(interp, "create_power_doamin", create_power_doamin, NULL, NULL);
    return TCL_OK;
}