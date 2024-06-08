cmake_minimum_required(VERSION 3.28)
project(TK1W2_reimagined-guacamole)

set(CMAKE_CXX_STANDARD 17)

add_executable(Binus main.cpp
        MK_Algo-TugasKelompok1/convertSeconds/convertSeconds.h
        MK_Algo-TugasKelompok1/convertSeconds/convertSeconds.cpp
        MK_Algo-TugasKelompok1/stringManipulator/stringManipulator.h
        MK_Algo-TugasKelompok1/stringManipulator/stringManipulator.cpp)
