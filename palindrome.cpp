#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  int left = 0;
  int right = text.size()-1;
  while (right>left) {
  if (text[left] != text[right]){return false;}
  left++; right--;
  }
  return true;
}

int main() {
  std::string text;
  std::cout <<"Input your TEXT\n";
  std::cin>>text;
  std::cout << is_palindrome("text") << "\n";
}
