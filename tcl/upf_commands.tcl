# load c/cimpl.so cimpl

# Globals passed to python
set command_name "TMP"
set command_args ""

# Handle unsupport commands
rename unknown _unknown;
proc unknown {args} {
    puts stderr "Unknown Command: $args"
    # pass the args to original error handler
    #uplevel 1 [list _unknown {*}$args]
}



proc create_power_domain args {
    puts [llength $args]

    global command_name
    global command_args

    set command_name [lindex [info level 0] 0]
    
    set result ""
    foreach x $args {
        append result $x
    }
    set command_args $result
}

proc connect_supply_net args {
}

proc set_scope args {
}
