cmake_minimum_required(VERSION 3.29)
project(es_9_16 C)

set(CMAKE_C_STANDARD 11)

add_executable(es_9_16 main.c
        dist2punti.c
        dist2punti.h)
