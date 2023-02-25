#include <stdlib.h>

char *find_needle(const char *const haystack[/* count */], size_t count)
{
  char *needle = "needle";
  int i;
  for(i = 0; i < count; i++) {
      int j = 0;
      char *tempString = haystack[i];
      while (tempString[j] != '\0' && needle[j] != '\0') {
        if(tempString[j] != needle[j]) {
          break;
        } else {
          return i;
        }
        j++;
      }
    }
}

int main(int argc, char const *argv[])
{
    const char *const haystack = {"needle"};
    find_needle(haystack, 1);
    return 0;
}
