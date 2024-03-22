#include <gtest/gtest.h>
#include <sstream>
#include "../include/MaxCliqueSearch.hpp"


TEST(MaxCliqueTest, ExampleTest1) {
    std::vector<std::vector<bool>> input_graph = {
        {0, 1, 0, 0, 1},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 1, 0},
        {0, 1, 1, 0, 0},
        {1, 0, 0, 0, 0}
    };

    std::stringstream output;
    std::streambuf* orig_cout = std::cout.rdbuf(output.rdbuf());

    std::cout << MaxClique(input_graph);

    std::string actual_output = output.str();
    std::string expected_output = "1 2 3 ";


    ASSERT_EQ(actual_output, expected_output);
}

TEST(MaxCliqueTest, ExampleTest2) {
    std::vector<std::vector<bool>> input_graph = {
        {0, 1, 1, 1, 1},
        {1, 0, 1, 1, 1},
        {1, 1, 0, 1, 1},
        {1, 1, 1, 0, 1},
        {1, 1, 1, 1, 0}
    };

    std::stringstream output;
    std::streambuf* orig_cout = std::cout.rdbuf(output.rdbuf());

    std::cout << MaxClique(input_graph);

    std::string actual_output = output.str();
    std::string expected_output = "0 1 2 3 4 ";

    ASSERT_EQ(actual_output, expected_output);
}

TEST(MaxCliqueTest, ExampleTest3) {
    std::vector<std::vector<bool>> input_graph(50, std::vector<bool>(50, 1));
    for (int i = 0; i < 50; ++i) {
    	input_graph[i][i] = 0;
    }

    std::stringstream output;
    std::streambuf* orig_cout = std::cout.rdbuf(output.rdbuf());

    std::cout << MaxClique(input_graph);

    std::string actual_output = output.str();
    std::string expected_output = "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 ";

    ASSERT_EQ(actual_output, expected_output);
}


TEST(MaxCliqueTest, ExampleTest4) {
    std::vector<std::vector<bool>> input_graph = {
        {0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 0, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 0, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 0}
    };

    std::stringstream output;
    std::streambuf* orig_cout = std::cout.rdbuf(output.rdbuf());

    std::cout << MaxClique(input_graph);

    std::string actual_output = output.str();
    std::string expected_output = "0 2 3 4 5 6 7 8 9 ";

    ASSERT_EQ(actual_output, expected_output);
}

TEST(MaxCliqueTest, ExampleTest5) {
    std::vector<std::vector<bool>> input_graph = {
        {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 0, 0, 1, 1, 1},
        {1, 1, 1, 1, 1, 0, 0, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 0}
    };

    std::stringstream output;
    std::streambuf* orig_cout = std::cout.rdbuf(output.rdbuf());

    std::cout << MaxClique(input_graph);

    std::string actual_output = output.str();
    std::string expected_output = "0 1 2 3 4 6 7 8 9 ";

    ASSERT_EQ(actual_output, expected_output);
}

TEST(MaxCliqueTest, ExampleTest6) {
    std::vector<std::vector<bool>> input_graph = {
        {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 0, 0, 1, 1, 1},
        {1, 1, 1, 1, 1, 0, 0, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 0, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 0}
    };

    std::stringstream output;
    std::streambuf* orig_cout = std::cout.rdbuf(output.rdbuf());

    std::cout << MaxClique(input_graph);

    std::string actual_output = output.str();
    std::string expected_output = "0 1 2 3 4 5 7 8 9 ";

    ASSERT_EQ(actual_output, expected_output);
}


TEST(MaxCliqueTest, ExampleTest7) {
    std::vector<std::vector<bool>> input_graph = {
        {0}
    };

    std::stringstream output;
    std::streambuf* orig_cout = std::cout.rdbuf(output.rdbuf());

    std::cout << MaxClique(input_graph);

    std::string actual_output = output.str();
    std::string expected_output = "0 ";

    ASSERT_EQ(actual_output, expected_output);
}

TEST(MaxCliqueTest, ExampleTest8) {
    std::vector<std::vector<bool>> input_graph = {
        {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 0, 0, 1, 1, 1},
        {1, 1, 1, 1, 1, 0, 0, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 0}
    };

    std::stringstream output;
    std::streambuf* orig_cout = std::cout.rdbuf(output.rdbuf());

    std::cout << MaxClique(input_graph);

    std::string actual_output = output.str();
    std::string expected_output = "0 1 2 3 4 6 7 8 9 ";

    ASSERT_EQ(actual_output, expected_output);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

