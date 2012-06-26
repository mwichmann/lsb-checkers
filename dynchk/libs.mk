COMMALIBS=$(shell cat ../lib_list  | tr '\n' ',' | sed 's/,$$//')
LIBS=$(shell echo $(COMMALIBS) | sed s\/,\/\ \/g)
