<PACKAGE>
include(../good-lead.xml)
<signature>
	<headerrec>
		<magic>0x8e 0xad 0xe8 0x01</magic>
		<reserved>0x00 0x00 0x00 0x00</reserved>
		<nindex>3</nindex>
		<hsize>22</hsize>
	</headerrec>
	<index>
		<tag>SIGTAG_SIGSIZE</tag>
		<type>INT32</type>
		<offset>0</offset>
		<count>1</count>
		<data>112</data>
	</index>
	<index>
		<tag>SIGTAG_MD5</tag>
		<type>BIN</type>
		<offset>4</offset>
		<count>16</count>
		<data>0b414361fb7a5d69c539a8298a3c2c5d</data>
	</index>
	<index>
		<tag>RPMTAG_HEADERI18NTABLE</tag>
		<type>STRING_ARRAY</type>
		<offset>20</offset>
		<count>1</count>
		<data>C</data>
	</index>
</signature>
<header>
	<headerrec>
		<magic>0x8e 0xad 0xe8 0x01</magic>
		<reserved>0x00 0x00 0x00 0x00</reserved>
		<nindex>0</nindex>
		<hsize>0</hsize>
	</headerrec>
</header>
include(../good-payload.xml)
</PACKAGE>
