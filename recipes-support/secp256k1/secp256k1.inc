AUTHOR = "Bernardo A. Rodrigues <bernardoaraujor@gmail.com>"

SUMMARY = "Optimized C library for EC operations on curve secp256k1"
DESCRIPTION = "Secp256k1 refers to the parameters of the ECDSA curve used in Bitcoin, and is defined in Standards for Efficient Cryptography (SEC) (Certicom Research, http://www.secg.org/sec2-v2.pdf). Secp256k1 was almost never used before Bitcoin became popular, but it is now gaining in popularity due to its several nice properties. Most commonly-used curves have a random structure, but secp256k1 was constructed in a special non-random way which allows for especially efficient computation. As a result, it is often more than 30% faster than other curves if the implementation is sufficiently optimized. Also, unlike the popular NIST curves, secp256k1's constants were selected in a predictable way, which significantly reduces the possibility that the curve's creator inserted any sort of backdoor into the curve."

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit autotools

SRC_URI = "git://github.com/cryptonomex/secp256k1-zkp.git;protocol=https;branch=secp256k1-zkp;"
SRCREV = "bd067945ead3b514fba884abd0de95fc4b5db9ae"

S = "${WORKDIR}/git"

SYSROOT_DIRS_NATIVE = "/usr/include /usr/lib"

BBCLASSEXTEND = "native"

