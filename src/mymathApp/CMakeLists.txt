# 生成可执行文件
add_executable(mymathapp mymathApp.cc)
target_link_directories(mymathapp PRIVATE ${CMAKE_BINARY_DIR})
target_link_libraries(mymathapp mymath::mymath  )
target_include_directories(mymathapp PRIVATE ${CMAKE_SOURCE_DIR}/mymath/include)

# 写入库的版本信息
include(CMakePackageConfigHelpers)

