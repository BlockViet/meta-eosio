require binaryen.inc

do_configure(){
    cd ${S}
    cmake .
}

do_compile(){
    cd ${S}
    oe_runmake ${PARALLEL_MAKE}
}

do_install(){
    cd ${S}
    oe_runmake install DESTDIR=${D} SBINDIR=${sbindir} MANDIR=${mandir} INCLUDEDIR=${includedir}
}
