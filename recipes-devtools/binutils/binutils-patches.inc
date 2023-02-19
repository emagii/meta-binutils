FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += " \
	file://0001-NEWS-for-ASCII-ASCIZ-linker-commands.patch \
	file://0002-ASCIZ-Command-for-output-section.patch \
	file://0003-ChangeLog-for-ASCII-ASCIZ-linker-commands.patch \
	file://0004-Add-support-for-the-ASCII-directive-inside-linker-sc.patch \
	file://0005-ld-test-asciz-and-ascii-fails.patch \
	file://0006-CRC64-testsuite.patch \
	file://0007-ldlex.l-CRC64.patch \
	file://0008-ldgram.y-CRC64.patch \
	file://0009-Calculate-CRC64-over-the-.text-area.patch \
	file://0010-Include-checksum.h-in-build.patch \
	file://0011-ld-NEWS-add-CRC32-64-TIMESTAMP.patch \
	file://0012-LIBCRC-license-MIT.patch \
	file://0013-CRC64-ld.texi-documentation.patch \
	"

