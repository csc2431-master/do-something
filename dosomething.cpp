#include <iostream>
#include <list>
#include <functional>

int processList(
    const std::list<int>& data,
    std::function<int(const std::list<int>&)> operation)
{
    return operation(data);
}

int main()
{
    std::list<int> numbers = {1, 2, 3, 4, 5};

    int sum = processList(numbers, [](const std::list<int>& lst) {
        int total = 0;
        for (int x : lst)
            total += x;
        return total;
    });

    processList(numbers, [](const std::list<int>& lst){
	    for (auto x : lst)
	    	std::cout << x << "\t";
	    std::cout << std::endl;
	    return 0;
    });

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}

