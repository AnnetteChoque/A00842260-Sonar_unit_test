//
// Created by Annette on 07/06/2025.
//

#include "mult.h"

TEST(MultiplyTest, HandlesPositiveInput)
{
    int multiplicacion = mult(3, 5);

    EXPECT_EQ(multiplicacion, 15);
}

TEST(MultiplyTest, HandlesNegativeInput)
{
    int multiplicacion = mult(-3, 5);

    EXPECT_EQ(multiplicacion, -15);
}
