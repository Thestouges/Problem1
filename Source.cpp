/*
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?
*/

#include <iostream>
#include <set>
#include <string>
#include <vector>

std::string findsum(std::vector<int> set, int k) {
	std::set<int> subset;
	for (int i = 0; i < set.size(); i++) {
		if (subset.count(set[i]) == 0) {
			subset.insert(k - set[i]);
		}
		else {
			int x = (k - set[i]);
			std::string result = std::to_string(set[i]) + " + " + std::to_string(k - set[i])+ " = " + std::to_string(k);
			return result;
		}
	}
	return "No result found";
}

void main() {
	std::vector<int> numset;
	int total, sum;

	std::cout << "Enter amount in list: ";
	std::cin >> total;

	for (int i = 0; i < total; i++) {
		std::cout << "Enter Number " << i << ": ";
		int temp;
		std::cin >> temp;
		numset.push_back(temp);
	}

	std::cout << "Enter total sum to find: ";
	std::cin >> sum;

	std::cout << findsum(numset, sum) << std::endl;

	system("pause");
}