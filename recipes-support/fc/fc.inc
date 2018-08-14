AUTHOR = "Bernardo A. Rodrigues <bernardoaraujor@gmail.com>"
SUMMARY = "Dan Larimer's FC"
DESCRIPTION = "FC stands for fast-compiling c++ library and provides a set of utility libraries useful for the development of asynchronous libraries"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit cmake

DEPENDS = " clang-native secp256k1 boost openssl"

SRC_URI = "git://github.com/EOSIO/fc.git;protocol=https;branch=master;"
SRCREV = "df5a17ef0704d7dd96c444bfd9a70506bcfbc057"

SRC_URI += "file://CMakeLists.txt"

S = "${WORKDIR}/git"

CMAKE_MODULE_PATH = "${S}/CMakeModules"
USR_DIR = "${WORKDIR}/recipe-sysroot/usr"
INCLUDE_DIR = "${WORKDIR}/recipe-sysroot/usr/include"
LIBRARIES_DIR = "${WORKDIR}/recipe-sysroot/usr/lib"

Secp256k1_INCLUDE_DIR = "${INCLUDE_DIR}"
Secp256k1_LIBRARY = "${LIBRARIES_DIR}"

GMP_LIBRARIES_DIR = "${LIBRARIES_DIR}"
GMP_INCLUDE_DIR = "${INCLUDE_DIR}"

BOOST_ROOT = "${USR_DIR}"

TOOLCHAIN = "clang"
TARGET_CC_ARCH = "-pthread"
