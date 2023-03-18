#!/bin/sh
QT_VERSION=5.15.2
export QT_VERSION
QT_VER=5.15
export QT_VER
QT_VERSION_TAG=5152
export QT_VERSION_TAG
QT_INSTALL_DOCS=/home/onbat2/Qt/Docs/Qt-5.15.2
export QT_INSTALL_DOCS
BUILDDIR=/home/onbat2/kms_IoT/Thirdparty/build-qtmqtt-Desktop_Qt_5_15_2_GCC_64bit-Debug/src/mqtt
export BUILDDIR
exec /home/onbat2/Qt/5.15.2/gcc_64/bin/qdoc "$@"
