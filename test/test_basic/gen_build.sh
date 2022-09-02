script_dir=$(cd $(dirname $0);pwd)
echo $script_dir
echo '!#/bin/bash
if [ ! -d build ]; then
    mkdir build
fi
cd build && cmake ..
make' > build.sh