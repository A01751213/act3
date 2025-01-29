cmake_minimum_required(VERSION 3.30)
project(unit_test)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    main.cpp
    MyMathLib.h
    Operations.h
    Factotial.h
)

set(TEST_SOURCES
    tests/test_operaciones.cpp
    tests/test_factorial.cpp
    tests/test_main.cpp
)

include_directories(${gtest_SOURCE_DIR}/include)

add_executable(unit_test ${SOURCES})

# Opciones
option(ENABLE_TESTING "Enable a Unit Testing build." ON)

# Descarga GoogleTest usando FetchContent
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# Si se habilitan las pruebas, agrega GoogleTest y las pruebas unitarias
if(ENABLE_TESTING)
    enable_testing()

    # Crear ejecutable de pruebas con TODOS los archivos de prueba
    add_executable(test_suite ${TEST_SOURCES})

    # Enlazar GoogleTest
    target_link_libraries(test_suite PRIVATE gtest gtest_main)

    # Registrar pruebas con CTest
    add_test(NAME AllTests COMMAND test_suite)
endif()
