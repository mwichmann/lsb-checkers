#!/bin/bash
while getopts fho:l: opt
do
  case $opt in
    f)  export LSB_ALWAYS_FLUSH=1;;
    o)  export LSB_OUTPUT_FILE=$OPTARG;;   
    l)  export LSB_OUTPUT_LEVEL=$OPTARG;;
    h)  echo "Usage: $0 [options] COMMAND"
	echo "  Options:"
	echo "  -l LEVEL"
	echo "    Set output level.  Higher LEVELs render more output.  If LEVEL is 4,"
	echo "    lsbdynchk will produce a message every time an lsb function is called."
	echo "  -o FILE"
	echo "    Send output to FILE.  Does not affect COMMAND's output."
	echo "  -f"
	echo "    Always flush every line of output as soon as it's generated.  This may"
	echo "    slow down performance a bit, but it guarantees that output reaches its"
	echo "    destination before the program dies. Handy for debugging."
	echo " -h"
	echo "    View this help dialog."
        exit 1;;
    \?) echo "Invalid option.  See '$0 -h'."
        exit 2;;
  esac
done
shift `expr $OPTIND - 1`


export LD_PRELOAD=@LIBDIR@/liblsbdynchk.so.1
exec $*
unset LD_PRELOAD
unset LSB_ALWAYS_FLUSH
unset LSB_OUTPUT_FILE
unset LSB_OUTPUT_LEVEL

