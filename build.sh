docker build -t bluemicro-builder .
docker run --rm -v "$PWD:/app" bluemicro-builder ./build/docker/gha-docker-communitynrf52.sh all:all:all:all:all

#pip install --pre -U git+https://github.com/makerdiary/uf2utils.git@main
uf2conv -f 0xADA52840 -c -o  ./output/firmware.uf2   ./output/knob-nice_nano-bluemicrov2_0c-default-single.hex
