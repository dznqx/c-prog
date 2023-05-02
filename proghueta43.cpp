#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void replacePositive(vector<int>& nums, int x) { 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            nums[i] = x;
        }
    }
}

void replaceEven(vector<int>& nums, int x) { 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 == 0) {
            nums[i] = x;
        }
    }
}

void replaceInRange(vector<int>& nums, int a, int b) { 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] >= a && nums[i] <= b) {
            nums[i] = 0;
        }
    }
}

void replaceValue(vector<int>& nums, int x, int y) { 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == x) {
            nums[i] = y;
        }
    }
}

void replaceTwoDigit(vector<int>& nums, int x) { 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] >= 10 && nums[i] <= 99) {
            nums[i] = x;
        }
    }
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void replacePrime(vector<int>& nums, int x) { 
    for (int i = 0; i < nums.size(); i++) {
        if (isPrime(nums[i])) {
            nums[i] = x;
        }
    }
}

int countEven(vector<int>& nums) { 
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int countDivisibleByNine(vector<int>& nums) { 
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 9 == 0) {
            count++;
        }
    }
    return count;
}

int countNotInRange(vector<int>& nums, int a, int b) { 
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < a || nums[i] > b) {
            count++;
        }
    }
    return count;
}

bool isTwoDigitSum(vector<int>& nums) { 
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
    return sum >= 10 && sum <= 99;
}

bool isPrimeSum(vector<int>& nums) { 
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
    return isPrime(sum);
}

int countMax(vector<int>& nums) {
    int maxNum = nums[0];
    int count = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > maxNum) {
            maxNum = nums[i];
            count = 1;
        }
    else if (nums[i] == maxNum) {
    count++;
        }
    }
    return count;
}

void replaceMax(vector<int>& nums) { 
int maxNum = nums[0];
// Находим максимальное число
for (int i = 1; i < nums.size(); i++) {
if (nums[i] > maxNum) {
maxNum = nums[i];
}
}
// Заменяем все максимальные числа на нули
for (int i = 0; i < nums.size(); i++) {
if (nums[i] == maxNum) {
nums[i] = 0;
}
}
}

void replaceMin(vector<int>& nums, int x) {
int minNum = nums[0];
// Находим минимальное число
for (int i = 1; i < nums.size(); i++) {
if (nums[i] < minNum) {
minNum = nums[i];
}
}
// Заменяем все минимальные числа на заданное число x
for (int i = 0; i < nums.size(); i++) {
if (nums[i] == minNum) {
nums[i] = x;
}
}
}

void swapMaxFirst(vector<int>& nums) {
int maxIndex = 0;
// Находим индекс максимального числа
for (int i = 1; i < nums.size(); i++) {
if (nums[i] > nums[maxIndex]) {
maxIndex = i;
}
}
// Меняем местами первый элемент и максимальный элемент
int temp = nums[0];
nums[0] = nums[maxIndex];
nums[maxIndex] = temp;
}

int main() {
// Пример использования функций
vector<int> nums = { 2, 3, 5, 6, 8, 12, 15, 17, 20, 25 };
replacePositive(nums, -1);
for (int i = 0; i < nums.size(); i++) {
cout << nums[i] << " ";
}
cout << endl;
vector<int> nums1 = { 2, 3, 5, 6, 8, 12, 15, 17, 20, 25 };
replaceEven(nums1, -1);
for (int i = 0; i < nums1.size(); i++) {
cout << nums1[i] << " ";
}
cout << endl;
vector<int> nums2 = { 2, 3, 5, 6, 8, 12, 15, 17, 20, 25 };
replaceInRange(nums2, 5, 15);
for (int i = 0; i < nums2.size(); i++) {
cout << nums2[i] << " ";
}
cout << endl;
vector<int> nums3 = { 2, 3, 5, 6, 8, 12, 15, 17, 20, 25 };
replaceValue(nums3, -1, -2);
for (int i = 0; i < nums3.size(); i++) {
cout << nums3[i] << " ";
}
cout << endl;
vector<int> nums4 = { 2, 3, 5, 6, 8, 12, 15, 17, 20, 25 };
replaceTwoDigit(nums4, -2);
for (int i = 0; i < nums4.size(); i++) {
cout << nums4[i] << " ";
}
cout << endl;
vector<int> nums5 = { 2, 3, 5, 6, 8, 12, 15, 17, 20, 25 };
replacePrime(nums5, -3);
for (int i = 0; i < nums5.size(); i++) {
cout << nums5[i] << " ";
}
cout << endl;
vector<int> nums7 = { 2, 3, 5, 6, 8, 12, 15, 17, 20, 25 };
replaceMax(nums7);
for (int i = 0; i < nums7.size(); i++) {
cout << nums7[i] << " ";
}
cout << endl;
vector<int> nums8 = { 2, 3, 5, 6, 8, 12, 15, 17, 20, 25 };
replaceMin(nums8,5);
for (int i = 0; i < nums8.size(); i++) {
cout << nums8[i] << " ";
}
cout << endl;
vector<int> nums9 = { 2, 3, 5, 6, 8, 12, 15, 17, 20, 25 };
swapMaxFirst(nums9);
for (int i = 0; i < nums9.size(); i++) {
cout << nums9[i] << " ";
}
cout << endl;
vector<int> nums10 = { 2, 3, 5, 6, 8, 12, 15, 17, 20, 25 };
cout << "Count even: " << countEven(nums10) << endl;
cout << "Count divisible by nine: " << countDivisibleByNine(nums10) << endl;
cout << "Count not in range: " << countNotInRange(nums10, 5, 15) << endl;
cout << "Is two-digit sum: " << isTwoDigitSum(nums10) << endl;
cout << "Is prime sum: " << isPrimeSum(nums10) << endl;
cout << "Count max: " << countMax(nums10) << endl;
for (int i = 0; i < nums10.size(); i++) {
cout << nums10[i] << " ";
}
return 0;
}