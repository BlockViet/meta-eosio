AUTHOR = "Bernardo A. Rodrigues <bernardoaraujor@gmail.com>"
SUMMARY = "EOSIO - The Most Powerful Infrastructure for Decentralized Applications"
DESCRIPTION = "EOSIO software enables developers to create and deploy high-performance, horizontally scalable, blockchain infrastructure upon which decentralized applications can be built."

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit cmake

DEPENDS = " binaryen-native boost openssl git gmp"

SRC_URI = "gitsm://github.com/EOSIO/eos.git;protocol=https;branch=master;tag=dawn-v4.2.0"

S = "${WORKDIR}/git"

BUILD_DIR = "${S}/build"

USR_DIR = "${WORKDIR}/recipe-sysroot/usr"
OPT_DIR_NATIVE ="${WORKDIR}/recipe-sysroot-native/opt/wasm"
INCLUDE_DIR = "${WORKDIR}/recipe-sysroot/usr/include"
LIBRARIES_DIR = "${WORKDIR}/recipe-sysroot/usr/lib"
BINARY_DIR_NATIVE = "${WORKDIR}/recipe-sysroot-native/usr/bin"

CMAKE_BUILD_TYPE = "Release"

#TODO: needs to be fixed
WASM_ROOT = "/home/bernardo/opt/wasm"
BOOST_ROOT = "${WORKDIR}/recipe-sysroot/usr"
GMP_LIBRARIES_DIR = "${LIBRARIES_DIR}"
GMP_INCLUDE_DIR = "${INCLUDE_DIR}"
BINARYEN_BIN = "${BINARY_DIR_NATIVE}"
OPENSSL_ROOT_DIR = "${INCLUDE_DIR}/openssl"

DOXYGEN = "false"
BUILD_MONGO_DB_PLUGIN = "false"
ENABLE_COVERAGE_TESTING = "false"

TARGET_CC_ARCH = "-pthread"
