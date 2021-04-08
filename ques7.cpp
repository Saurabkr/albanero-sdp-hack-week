#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int* createArray(int num, int length) 
{

int* result = (int *)malloc(length * sizeof(int));

for (int i = 0; i < length; i++)
 {
result[i] = (i+1) * num;
}
return result;
}

int main(int argc, char** argv)
{
if(argc < 3)
 {
printf("Enter 2 numbers as arguments\n");
return 0;
}
printf("%s %s -> [", argv[1], argv[2]);
int* result = createArray(atoi(argv[1]), atoi(argv[2]));
for (int i = 0; i < atoi(argv[2]); i++)
 {
printf("%d ", result[i]);
}
printf("]\n");
return 0;
}
