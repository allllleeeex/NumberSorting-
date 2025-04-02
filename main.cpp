
#include <iostream>
#include <fstream>
#include <vector>

void read_numbers()
void sort()
void find_lowest()

int main() {
std::ifstream num_file;
int amount;
num_file.open("numbers.txt");
num_file >> amount;
std::vector <int> num_list;
int y;
for (int i = 0; i < amount ; i ++) {
num_file >> y;
num_list.push_back(y);
}
num_file.close();
std::vector<int> sorted_list;
for (int i = 0; i < amount; i ++) {
int small = 0;
for (int j = 0; j < num_list.size(); j ++) {
if (num_list[j] < num_list[small] )
{
small = j;
}
}
sorted_list.push_back(num_list[small]);
num_list.erase(num_list.begin()+ small);
}
std::cout << "Here are the ordered numbers from numbers.txt \n";
for (int num : sorted_list) {
std:: cout << num << " ";
}
std::cout << "\nWhat file would you like to move the sorted values to?: " ;
std::string fileInfo;
std:: cin >> fileInfo;
std:: ofstream newFile;
newFile.open(fileInfo);
for (int num : sorted_list) {
newFile << num << "\n";
}
newFile.close();
}



