FROM ubuntu:16.04

RUN apt-get update && apt-get -y install gcc make gcc-multilib git ca-certificates --no-install-recommends

RUN git clone https://github.com/ThrowTheSwitch/Unity.git

COPY ./app /app
WORKDIR /app/app

CMD ["make"]
