#include <iostream>
#include <vector>

int availableSpots(std::vector<int> arr, int num) {
    int av_spots_amount = 0;
	for (int i = 1; i<(arr.size()); i++){
	    int neighbourhood [3] = {arr[i-1]%2 , num%2 , arr[i]%2};
	    if (neighbourhood[1] != neighbourhood[0] && neighbourhood[1] != neighbourhood[2]){
	        continue;
	    }
        av_spots_amount++;
	}
	return av_spots_amount;
}

int main() {
    std::vector<int> test_case = {0, 4, 6 , 8};
    std::cout << availableSpots(test_case, 9);
    return 0;
}