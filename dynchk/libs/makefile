LIBS=libc libcrypt libGL libncurses libSM libX11 libz libdl libICE libpam libstdcxx libXext libgcc_s libm libpthread libutil libXt

all:
	for d in $(LIBS);do (cd $$d && make all);done

clean:
	for d in $(LIBS);do (cd $$d && make clean);done
