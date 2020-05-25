#include <iostream>
#include<string>
#include<algorithm>

bool isPalindrome(const std::string & text)
{
  std::string reversedText = text;
  std::reverse(reversedText.begin(), reversedText.end());

  if(text == reversedText)
  {
    return true;
  }
  
  return false;
}

int main() 
{
  std::cout<<isPalindrome("Ala ma kota")<<std::endl;
  std::cout<<isPalindrome("ala")<<std::endl;
  std::cout<<isPalindrome("kajak")<<std::endl;
  std::cout<<isPalindrome("neveroddoreven")<<std::endl;
  std::cout<<isPalindrome("abacada")<<std::endl;

  return 0;
}
