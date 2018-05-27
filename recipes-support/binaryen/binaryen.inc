AUTHOR = "Bernardo A. Rodrigues <bernardoaraujor@gmail.com>"
SUMMARY = "Compiler infrastructure and toolchain library for WebAssembly, in C++"
DESCRIPTION = "Binaryen is a compiler and toolchain infrastructure library for WebAssembly, written in C++. It aims to make compiling to WebAssembly easy, fast, and effective."

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/Apache-2.0;md5=89aea4e17d99a7cacdbeed46a0096b10"

inherit cmake

SRC_URI = "git://github.com/WebAssembly/binaryen.git;protocol=https;branch=souper;"
SRCREV = "1c6b0a2f2f326784beb822e410f0966e6e51a07b"

S = "${WORKDIR}/git"

FILES_${PN} = "/usr"

SYSROOT_DIRS_NATIVE = "/usr"

BBCLASSEXTEND = "native"
