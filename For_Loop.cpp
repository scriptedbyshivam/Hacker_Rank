#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
	//yaha par agar hum i=1 se 1<=9 tak karte toh yaha loop 1 se 9 tak chalta jisse sari value output de rahi thi 
	// isliye customise karne ke liye humne a aur b liya ,according to the qusetion 
	//Jisse sepectific value hi aa sake, jasia question mai manga tha
	//if we do a=8 and b=11
	// it will run 8 = eight, 9= nine, 10 =even, 11= odd
	
	 {
        if (i == 1) cout << "one" << endl;
        else if (i == 2) cout << "two" << endl;
        else if (i == 3) cout << "three" << endl;
        else if (i == 4) cout << "four" << endl;
        else if (i == 5) cout << "five" << endl;
        else if (i == 6) cout << "six" << endl;
        else if (i == 7) cout << "seven" << endl;
        else if (i == 8) cout << "eight" << endl;
        else if (i == 9) cout << "nine" << endl;
        else if (i>9) {
         if (i % 2 == 0) cout << "even" << endl;
        else{cout << "odd" << endl;
  } 
          }

        }
        
        
    return 0;
}






//GFG Standard Coding Style in C++

//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, b;
//    cin >> a >> b;
//
//    string words[] = {
//        "one", "two", "three", "four", "five",
//        "six", "seven", "eight", "nine"
//    };
//
//    for (int i = a; i <= b; i++) {
//        if (i >= 1 && i <= 9) {
//            cout << words[i - 1] << endl;  // Array is 0-indexed
//        } else if (i % 2 == 0) {
//            cout << "even" << endl;
//        } else {
//            cout << "odd" << endl;
//        }
//    }
//
//    return 0;
//}
