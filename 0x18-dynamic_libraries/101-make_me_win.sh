#!/bin/bash
wget -P /tmp https://github.com/AngryDuchess/alx-low_level_programming/blob/master/0x18-dynamic_libraries/win_preload.so
export LD_PRELOAD=/tmp/win_preload.so
