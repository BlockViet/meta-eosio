AUTHOR = "Bernardo A. Rodrigues <bernardoaraujor@gmail.com>"
SUMMARY = "Compiler infrastructure and toolchain library for WebAssembly, in C++"
DESCRIPTION = "Binaryen is a compiler and toolchain infrastructure library for WebAssembly, written in C++. It aims to make compiling to WebAssembly easy, fast, and effective."

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/Apache-2.0;md5=89aea4e17d99a7cacdbeed46a0096b10"

inherit cmake

SRC_URI = "git://github.com/EOSIO/binaryen.git;protocol=https;branch=eosio"
SRCREV = "b4b5dc9dee60489c4206af99227524b13f2eb3aa"

S = "${WORKDIR}/git"

SYSROOT_DIRS = "/usr/local/bin"
SYSROOT_DIRS_NATIVE = "/usr/local/bin"

BBCLASSEXTEND = "native"
