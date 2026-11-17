// Task: B5 - type conversion: a correct average of three ints and the ASCII code of a char.
// Name: MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211
#include <iostream>
using namespace std;

int main()
{
    // TODO 1: declare three int variables and an int sum; read the three numbers with one prompt
    int a, b, c, sum;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"Enter value of c : ";
    cin>>c;

    // TODO 2: print sum / 3 and label it "Average without a cast"
    sum = a + b + c;
    double Average_without_a_cast = sum / 3;
    cout<<"Average without a cast : "<<Average_without_a_cast<<"\n";

    // TODO 3: print static_cast<double>(sum) / 3 and label it "Average with static_cast"
    double Average_with_static_cast = static_cast<double>(sum)/3;
    cout<<"Average with static_cast : "<< Average_with_static_cast<<"\n";

    // TODO 4: declare a char, read one letter, print the letter and static_cast<int>(letter)
    char letter;
    cout << "Enter one letter : ";
    cin >> letter;
	cout << letter << " has ASCII code " << static_cast<int>(letter)<<"\n";

    // TODO 5: print the NEXT letter: static_cast<char>(letter + 1)
	char nextletter = static_cast<char>(letter + 1);
	cout << "The next letter is " << nextletter;
    return 0;
}
