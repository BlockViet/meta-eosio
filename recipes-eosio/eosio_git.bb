AUTHOR = "Bernardo A. Rodrigues <bernardo@openminingOS.org>"
SUMMARY = "BFGMiner is a multi-threaded, multi-blockchain, multi-pool ASIC, FPGA, GPU and CPU miner with dynamic clocking, monitoring, and fanspeed support for bitcoin."
DESCRIPTION = ""

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit cmake

DEPENDS = " "
RDEPENDS_${PN} = " "

SRC_URI = "git://github.com//EOSIO/eos.git;protocol=https;branch=master;"
SRCREV = "d75c30e1ce43678066b7559c0e78894896279dc7"

S = "${WORKDIR}/git"

