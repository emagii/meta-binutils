FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += " \
	file://0001-ldlex.l-Add-ASCIZ-token.patch \
	file://0002-ldgram.y-Add-ASCIZ-string-command.patch \
	file://0003-Parse-ASCIZ-command.patch \
	file://0004-Document-the-ASCIZ-command.patch \
	"

