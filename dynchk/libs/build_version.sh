#!/bin/bash

for i in All.*.Version
do
    cat "${i}" >> "${i/All/IA32}";
    cat "${i}" >> "${i/All/x86-64}";
    cat "${i}" >> "${i/All/PPC32}";
    cat "${i}" >> "${i/All/PPC64}";
    cat "${i}" >> "${i/All/IA64}";
    cat "${i}" >> "${i/All/S390}";
    cat "${i}" >> "${i/All/S390X}";
    rm -f "$i";
done


for i in *.Version
do
    cat $i | awk 'RS="\f" {sub(/};\n.+{\n/,"")}; 1' > tmp.file
    mv tmp.file $i
done

cat IA32*.Version > ../liblsbdynchk.Version.i686
cat x86-64*.Version > ../liblsbdynchk.Version.x86_64
cat PPC32*.Version > ../liblsbdynchk.Version.ppc32
cat PPC64*.Version > ../liblsbdynchk.Version.ppc64
cat IA64*.Version > ../liblsbdynchk.Version.ia64
cat S390*.Version > ../liblsbdynchk.Version.s390
cat S390X*.Version > ../liblsbdynchk.Version.s390x

rm -f *.Version
