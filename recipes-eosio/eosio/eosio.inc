AUTHOR = "Bernardo A. Rodrigues <bernardoaraujor@gmail.com>"
SUMMARY = "EOSIO - The Most Powerful Infrastructure for Decentralized Applications"
DESCRIPTION = "EOSIO software enables developers to create and deploy high-performance, horizontally scalable, blockchain infrastructure upon which decentralized applications can be built."

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit cmake

DEPENDS = " clang-native binaryen-native boost openssl gmp secp256k1 git"

SRC_URI = "gitsm://github.com/EOSIO/eos.git;protocol=https;branch=master;tag=dawn-v4.2.0"

S = "${WORKDIR}/git"

BUILD_DIR = "${S}/build"

USR_DIR = "${WORKDIR}/recipe-sysroot/usr"
USR_DIR_NATIVE = "${WORKDIR}/recipe-sysroot-native/usr"
OPT_DIR_NATIVE ="${WORKDIR}/recipe-sysroot-native/opt/wasm"
INCLUDE_DIR = "${WORKDIR}/recipe-sysroot/usr/include"
LIBRARIES_DIR = "${WORKDIR}/recipe-sysroot/usr/lib"
BINARY_LOCAL_NATIVE = "${WORKDIR}/recipe-sysroot-native/usr/local/bin"

CMAKE_BUILD_TYPE = "Release"

WASM_ROOT = "${USR_DIR_NATIVE}"
BOOST_ROOT = "${USR_DIR}"
GMP_LIBRARIES_DIR = "${LIBRARIES_DIR}"
GMP_INCLUDE_DIR = "${INCLUDE_DIR}"
BINARYEN_BIN = "${BINARY_LOCAL_NATIVE}"
OPENSSL_ROOT_DIR = "${INCLUDE_DIR}/openssl"
Secp256k1_INCLUDE_DIR = "${INCLUDE_DIR}"
Secp256k1_LIBRARY = "${LIBRARIES_DIR}"

DOXYGEN = "false"
BUILD_MONGO_DB_PLUGIN = "false"
ENABLE_COVERAGE_TESTING = "false"

TARGET_CC_ARCH = "-pthread"

