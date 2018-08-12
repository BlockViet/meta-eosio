require fc.inc

do_configure(){
    cp ${WORKDIR}/CMakeLists.txt ${S}
    cmake -DSecp256k1_INCLUDE_DIR=${Secp256k1_INCLUDE_DIR} \
          -DSecp256k1_LIBRARY=${Secp256k1_LIBRARY} \
          -DGMP_LIBRARIES=${GMP_LIBRARIES_DIR} \
          -DGMP_INCLUDE_DIR=${GMP_INCLUDE_DIR} \
          ${S}
}

