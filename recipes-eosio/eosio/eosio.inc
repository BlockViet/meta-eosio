AUTHOR = "Bernardo A. Rodrigues <bernardo@openminingOS.org>"
SUMMARY = "EOSIO - The Most Powerful Infrastructure for Decentralized Applications"
DESCRIPTION = "EOSIO software enables developers to create and deploy high-performance, horizontally scalable, blockchain infrastructure upon which decentralized applications can be built."

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit cmake

#DEPENDS = " "
#RDEPENDS_${PN} = " "

SRC_URI = "gitsm://github.com/EOSIO/eos.git;protocol=https;branch=master;"
SRCREV = "d9ad8eec49c59fb107f472de3952d29c9e73a023"

S = "${WORKDIR}/git"

