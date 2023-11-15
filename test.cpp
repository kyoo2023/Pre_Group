#include "pch.h"

//TEST(TestCaseName, TestName) {
//  EXPECT_EQ(1, 1);
//  EXPECT_TRUE(true);
//}

//TEST(type_test, typeofelement) {
//    ASSERT_EQ(typeid(F), typeid(u[0][0]));
//    ASSERT_EQ(typeid(k), typeid(v[0][0]));
//}
//
//TEST(size_test, sizeofvectors) {
//    // test u and v have the same number of raws
//    ASSERT_EQ(u.size(), v.size());
//    // u and v have the same number of colomns in all raws
//    for (size_t i = 0; i < u.size(); i++) {
//        ASSERT_EQ(u[i].size(), v[i].size());
//    }
//}
//
//TEST(value_test, valueofmodel) {
//    init();
//    //ASSERT_EQ(u, v);
//
//    //Main simulation loop   
//    for (int iteration = 0; iteration < numIterations; ++iteration) {
//        simulateStep();
//        // Periodically write to VTK file
//        if (iteration % outputInterval == 0) {
//            writeVTKFile(iteration);
//        }
//    }
//    ASSERT_FLOAT_EQ(dV, Dv * laplaceV);
//    ASSERT_FLOAT_EQ(dU, Du * laplaceU);
//}

//TEST(value_test, valueofmodel) {
//    init0();
//    ASSERT_EQ(u[150][150], 1);
//    ASSERT_EQ(v[150][150], 0);
//}