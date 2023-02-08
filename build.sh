#!/bin/bash

readonly VERSION_ROS1="ROS1"
readonly VERSION_ROS2="ROS2"
readonly VERSION_HUMBLE="humble"
readonly VERSION_ECAL="ECAL"

pushd `pwd` > /dev/null
cd `dirname $0`
echo "Working Path: "`pwd`

ROS_VERSION=""
ROS_HUMBLE=""
ECAL_VERSION=""

# Set working ROS version
if [ "$1" = "ROS2" ]; then
    ROS_VERSION=${VERSION_ROS2}
    echo "ROS version is: "$ROS_VERSION
elif [ "$1" = "humble" ]; then
    ROS_VERSION=${VERSION_ROS2}
    ROS_HUMBLE=${VERSION_HUMBLE}
    echo "ROS version is: "$ROS_VERSION
elif [ "$1" = "ROS1" ]; then
    ROS_VERSION=${VERSION_ROS1}
    echo "ROS version is: "$ROS_VERSION
elif [ "$1" = "ECAL" ]; then
    ECAL_VERSION=${VERSION_ECAL}
    echo "ECAL version is: "$ECAL_VERSION
else
    echo "Invalid Argument"
    exit
fi
# echo "ROS version is: "$ROS_VERSION

# clear `build/` folder.
# TODO: Do not clear these folders, if the last build is based on the same ROS version.
rm -rf ../../build/
rm -rf ../../devel/
rm -rf ../../install/
# clear src/CMakeLists.txt if it exists.
if [ -f ../CMakeLists.txt ]; then
    rm -f ../CMakeLists.txt
fi

# exit

# substitute the files/folders: CMakeList.txt, package.xml(s)
if [ "${ROS_VERSION}" = "${VERSION_ROS1}" ]; then
    if [ -f package.xml ]; then
        rm package.xml
    fi
    cp -f package_ROS1.xml package.xml
elif [ "${ROS_VERSION}" = "${VERSION_ROS2}" ]; then
    if [ -f package.xml ]; then
        rm package.xml
    fi
    cp -f package_ROS2.xml package.xml
    cp -rf launch_ROS2/ launch/
fi

# build
pushd `pwd` > /dev/null
if [ "$ROS_VERSION" = "${VERSION_ROS1}" ]; then
    cd ../../
    catkin_make -DROS_EDITION=${VERSION_ROS1}
elif [ "$ROS_VERSION" = "${VERSION_ROS2}" ]; then
    cd ../../
    colcon build --cmake-args -DROS_EDITION=${VERSION_ROS2} -DHUMBLE_ROS=${ROS_HUMBLE}
elif [ "$ECAL_VERSION" = "${VERSION_ECAL}" ]; then
    rm -rf build
    mkdir build && cd build
    cmake .. -DECAL_EDITION=${VERSION_ECAL}
    make -j4
fi
popd > /dev/null

# remove the substituted folders/files
if [ "$ROS_VERSION" = "${VERSION_ROS2}" ]; then
    rm -rf launch/
fi

popd > /dev/null
