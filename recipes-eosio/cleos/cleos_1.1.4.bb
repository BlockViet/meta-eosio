require cleos.inc

do_configure(){
    cmake -DCMAKE_INSTALL_FULL_BINDIR="${D}${bindir}" \
          ${S}
}

do_compile_prepend(){
    cp -r ${WORKDIR}/fc ${S}/fc
}
