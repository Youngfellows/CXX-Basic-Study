#! /bin/bash

# 注意: 脚本一定要用Notepad++转化为文档格式为Unix(LF)

PROJ_ROOT=$PWD
BUILD_ROOT=${PROJ_ROOT}
echo "Build Root: ${BUILD_ROOT}"

# 设置编译时,OpenCV链接库路径
:<<!
OPENCV_LIBRARY_PATH=/mnt/d/LinuxEnvironment/develops/opencv/opencv-v4.8.0
export LD_LIBRARY_PATH=${OPENCV_LIBRARY_PATH}/lib/
echo "LD_LIBRARY_PATH: ${LD_LIBRARY_PATH}"
!

# 设置Release目录
RELEASE_DIR=${BUILD_ROOT}/Release
if [ -e ${RELEASE_DIR} ]; then
    echo "rm -rf ${RELEASE_DIR}"
    rm -rf ${RELEASE_DIR}
fi
mkdir -p ${RELEASE_DIR}

# 设置安装目录
INSTALL_PREFIX=${RELEASE_DIR}

# 设置build编译目录
BUILD_DIR=${BUILD_ROOT}/build
if [ -e ${BUILD_DIR} ]; then
    echo "rm -rf ${BUILD_DIR}"
    rm -rf ${BUILD_DIR}
fi
mkdir -p ${BUILD_DIR}

# cd到build目录
cd ${BUILD_DIR}

# 方式1,使用CMake编译
:<<!
cmake ..
make -j4
make install
!

# 方式2,使用CMake编译
#-D CMAKE_BUILD_TYPE=Debug \
#:<<!
cmake \
-G "Unix Makefiles"  \
-D CMAKE_BUILD_TYPE=Release \
-D CMAKE_INSTALL_PREFIX:PATH=${INSTALL_PREFIX} \
..
make -j4
make install
cd -
#!

# 方式3,使用CMake编译
#-D CMAKE_BUILD_TYPE=Debug \
:<<!
cmake \
-G "Unix Makefiles"  \
-D CMAKE_BUILD_TYPE=Release \
-D CMAKE_INSTALL_PREFIX:PATH=${INSTALL_PREFIX} \
..
#cmake --build .
cmake --build . --target install
cd -
!

# 方式4,使用CMake编译
#-D CMAKE_BUILD_TYPE=Debug \
:<<!
cmake \
-G "Unix Makefiles"  \
-D CMAKE_BUILD_TYPE=Release \
-D CMAKE_INSTALL_PREFIX:PATH=${INSTALL_PREFIX} \
$PROJ_ROOT
# ..
# cmake --build .
# cmake --build ${BUILD_DIR}
cmake --build ${BUILD_DIR} --target install
cd -
!

# 设置运行时lib动态链接库路径
#:<<!
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${RELEASE_DIR}/lib/
echo "LD_LIBRARY_PATH: ${LD_LIBRARY_PATH}"
#!

# 运行可执行目标
# ./Release/bin/hello-world
# ${RELEASE_DIR}/bin/hello-world

# 遍历指定目录下所有文件，包括子目录下的所有文件,并运行
#:<<!
TARGET_EXEC=Demo
BIN_DIR=${RELEASE_DIR}/bin
for name in $(find $BIN_DIR -type f -name "*"); do
    # 获取此脚本的绝对路径文件名
    file_name="${name##*/}"
    echo -e "\nfile_name:${file_name}"
    echo -e "run::${name}"
    if [ ${file_name} == ${TARGET_EXEC} ]; then
       ${name} 2 3
    else
        ${name}
    fi
done
#!
