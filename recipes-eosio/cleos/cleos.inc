AUTHOR = "Bernardo A. Rodrigues <bernardoaraujor@gmail.com>"
SUMMARY = ""
DESCRIPTION = ""

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit cmake

DEPENDS = " clang-native binaryen-native boost openssl fc utilities chain chainbase "

SRC_URI = "file://cleos-1.1.4.tar.gz"

S = "${WORKDIR}/cleos-1.1.4"

CMAKE_INSTALL_FULL_BINDIR = "${D}${bindir}"

USR_DIR = "${WORKDIR}/recipe-sysroot/usr"
USR_DIR_NATIVE = "${WORKDIR}/recipe-sysroot-native/usr"
OPT_DIR_NATIVE ="${WORKDIR}/recipe-sysroot-native/opt/wasm"
INCLUDE_DIR = "${WORKDIR}/recipe-sysroot/usr/include"
LIBRARIES_DIR = "${WORKDIR}/recipe-sysroot/usr/lib"
BINARY_LOCAL_NATIVE = "${WORKDIR}/recipe-sysroot-native/usr/local/bin"

CMAKE_BUILD_TYPE = "Release"

Secp256k1_INCLUDE_DIR = "${INCLUDE_DIR}"
Secp256k1_LIBRARY = "${LIBRARIES_DIR}"

TARGET_CC_ARCH = "-pthread"

