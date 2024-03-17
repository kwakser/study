#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "insert_sort.hpp"

TEST(ArraysEqual, AnyElementsCount) {
	std::vector<int> actual = { 1, 11, 5, 4, 18, 7 };
	InsertSort::insertionSort(actual);
	std::vector<int> expected = { 1, 4, 5, 7, 18, 11 };

	ASSERT_EQ(expected.size(), actual.size())
		<< "–азные рамеры ожидаемого и отсортированного массивов";

	for (int i = 0; i < actual.size(); i++) {
		ASSERT_EQ(expected[i], actual[i])
			<< "ћассив ожидаемый и отсортированный отличаютс€ в элементе с индексом"
			<< i;
	}
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}