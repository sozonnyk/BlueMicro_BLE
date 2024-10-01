FROM jpconstantineau/arduino-cli-community-nrf52:latest

RUN arduino-cli core install adafruit:nrf52 --additional-urls https://adafruit.github.io/arduino-board-index/package_adafruit_index.json

WORKDIR /app
ENV GITHUB_WORKSPACE=/app
