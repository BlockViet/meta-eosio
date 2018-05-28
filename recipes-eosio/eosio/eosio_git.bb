require eosio.inc

do_configure(){
    mkdir -p ${BUILD_DIR}
    cd ${BUILD_DIR}
    cmake -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE} \
          -DBOOST_ROOT=${BOOST_ROOT} \
          -DWASM_ROOT=${WASM_ROOT} \
          -DGMP_LIBRARIES=${GMP_LIBRARIES_DIR} \
          -DGMP_INCLUDE_DIR=${GMP_INCLUDE_DIR} \
          -DBINARYEN_BIN=${BINARYEN_BIN} \
          -DOPENSSL_ROOT_DIR=${OPENSSL_ROOT_DIR} \
          -DBUILD_DOXYGEN=${DOXYGEN} \
          -DSecp256k1_INCLUDE_DIR=${Secp256k1_INCLUDE_DIR} \
          -DSecp256k1_LIBRARY=${Secp256k1_LIBRARY} \
          -DBUILD_MONGO_DB_PLUGIN=${BUILD_MONGO_DB_PLUGIN} \
          -DENABLE_COVERAGE_TESTING=${ENABLE_COVERAGE_TESTING} \
          ${S}
}

do_compile(){
   cd ${BUILD_DIR}
   oe_runmake
}

