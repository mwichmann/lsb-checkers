#!/bin/bash
while getopts f:l: opt
do
  case $opt in
    f)  export LSB_OUTPUT_FILE=$OPTARG;;
    
    l)  export LSB_OUTPUT_LEVEL=$OPTARG;;
    h)  echo "Usage: $0 [-f output-file] [-l output-level] command"
        exit 1;;
    \?) echo "Usage: $0 [-f output-file] [-l output-level] command"
        exit 2;;
  esac
done
shift `expr $OPTIND - 1`


export LD_PRELOAD=@LIBDIR@/liblsbdynchk.so.1
exec $*
unset LD_PRELOAD
unset LSB_OUTPUT_FILE
unset LSB_OUTPUT_LEVEL

