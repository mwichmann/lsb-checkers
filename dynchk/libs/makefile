LIBS=libc libcrypt libGL libncurses libSM libX11 libz libdl libICE libpam libstdcxx libXext libgcc_s libm libpthread libutil libXt

all:
	for d in $(LIBS);do (cd $$d && make all);done

gensrc:
	for d in $(LIBS);do (./gen_lib.pl -l $$d );done

clean:
	for d in $(LIBS);do (cd $$d && make clean);done
