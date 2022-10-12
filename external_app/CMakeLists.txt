project(TestInstallation)
cmake_minimum_required(VERSION 3.5)

set(mymath_DIR "E:\\AAAAA_cmk_lib_export\\SCLEII_onlyOneLIbAddSeprt_oh\\SCLEII_onlyOneLIbAddSeprt_oh_19.0.24215.1_install\\lib\\cmake\\mymath" )
find_package( mymath REQUIRED
#    PATHS  "E:\\AAAAA_cmk_lib_export\\SCLEII_onlyOneLIbAddSeprt_oh\\SCLEII_onlyOneLIbAddSeprt_oh_19.0.24215.1_install"
)

add_executable(mymathApp mymathApp.cc)

message( " {mymath_INCLUDE_DIR} = ${mymath_INCLUDE_DIR}")

include_directories(${mymath_INCLUDE_DIR})
target_link_libraries(mymathApp
    MyMath::mymath
)
target_include_directories(mymathApp  PRIVATE  "E:\\AAAAA_cmk_lib_export\\SCLEII_onlyOneLIbAddSeprt_oh\\SCLEII_onlyOneLIbAddSeprt_oh_19.0.24215.1_install/include")
