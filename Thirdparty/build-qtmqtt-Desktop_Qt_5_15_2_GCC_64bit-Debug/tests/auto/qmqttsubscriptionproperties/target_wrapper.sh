#!/bin/sh
LD_LIBRARY_PATH=/home/onbat2/kms_IoT/Thirdparty/build-qtmqtt-Desktop_Qt_5_15_2_GCC_64bit-Debug/lib:/home/onbat2/Qt/5.15.2/gcc_64/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}
export LD_LIBRARY_PATH
QT_PLUGIN_PATH=/home/onbat2/Qt/5.15.2/gcc_64/plugins${QT_PLUGIN_PATH:+:$QT_PLUGIN_PATH}
export QT_PLUGIN_PATH
exec "$@"
