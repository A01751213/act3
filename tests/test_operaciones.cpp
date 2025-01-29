#include <gtest/gtest.h>
#include "Operaciones.h"

TEST(OperacionesTest, Suma) {
    EXPECT_EQ(sumar(5, 3), 8);
}

TEST(OperacionesTest, Resta) {
    EXPECT_EQ(restar(5, 3), 2);
}

TEST(OperacionesTest, Multiplicacion) {
    EXPECT_EQ(multiplicar(5, 3), 15);
}

TEST(OperacionesTest, Division) {
    EXPECT_EQ(dividir(6, 2), 3);
    EXPECT_THROW(dividir(6, 0), std::runtime_error);
}
