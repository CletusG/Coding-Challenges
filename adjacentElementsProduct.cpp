#include <iostream>
#include <vector>

using namespace std;

int adjElementsProduct(vector<int> inputArray) {
	int l = inputArray.size();
	int result;
	vector<int> finalArray;

	// loop through inputArray and multiply all adjacent units
	for (int i = 0; i < l - 1; i++) {
		result = inputArray[i] * inputArray[i + 1];
		// put these units in a new array
		finalArray.push_back(result);
	}

	// take this new array and find the largest element in it
	for (int i = 1; i < finalArray.size(); i++) {
		// if the first element is smaller than i (starting with 1), set the first element to i. this will make element 0 the largest
		if (finalArray[0] < finalArray[i]) {
			finalArray[0] = finalArray[i];
		}
	}

	cout << finalArray[0] << endl;
	return finalArray[0];
}

int main() {
	vector<int> test{ 3, 6, -2, -5, 7, 3 };
	adjElementsProduct(test);
}

/* Another good way to do it is like this:
int adjacentElementsProduct(std::vector<int> inputArray) {
    int ans = -987654321;
    for (int i = 1; i < inputArray.size(); ++i)
        ans = max(ans, inputArray[i] * inputArray[i - 1]);
    return ans;
}
*/
