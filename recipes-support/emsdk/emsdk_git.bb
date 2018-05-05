AUTHOR = "Bernardo A. Rodrigues <bernardo@openminingOS.org>"

SUMMARY = "Emscripten SDK"
DESCRIPTION = "Emscripten toolchain is distributed as a standalone Emscripten SDK. The SDK provides all the required tools, such as Clang, Python and Node.js along with an update mechanism that enables migrating to newer Emscripten versions as they are released."

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

DEPENDS = " llvm"
RDEPENDS_${PN} = " "

SRC_URI = "gitsm://github.com/juj/emsdk.git;protocol=https;branch=master;"
SRCREV = "63ccba9f6307da3fcccaa9324252da54f4cba505"

S = "${WORKDIR}/git"

do_install(){
    cd ${S}; ./emsdk install latest; 
}
