
GENXML = $(subst .m4,.xml,$(wildcard *.m4))
XMLS = $(GENXML)
RPMS = $(subst .xml,.rpm,$(XMLS))

.SUFFIXES: .rpm .xml .m4

%.xml: %.m4
	m4 -Uindex -Uformat -Usubstr $*.m4 >$@

%.rpm: %.xml
	../../../tools/mkpkg/mkpkg $*.xml

all: $(RPMS)

$(RPMS): $(XMLS)

clean:
	rm -f $(RPMS) $(GENXML)
