#!/bin/bash
wget -P /tmp/ https://raw.github.com/AliyahTanzil/alx-low_level_programming/0x18-dynamic_libraries/preload.so
export LD_PRELOAD=/tmp/preload.so
