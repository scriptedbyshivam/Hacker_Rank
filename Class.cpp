#include <iostream>
#include <sstream>
using namespace std;


class Student{
    int age;
    int standard;
    string first_name;
    string last_name;
    
    
    public:
    
    void set_age(int a){
        age = a;
        // get_age=age;
    }
    
    void set_standard(int b){
        standard=b;
        
    }
    
    void set_first_name(string c){
        first_name=c;
    }
    
    void set_last_name(string d){
        last_name=d;
    }
    
    int get_age(){
        return age;
    }
    
    string get_last_name(){
        return last_name;
        
    }
    string get_first_name(){
        return first_name;
    }
    
    int get_standard(){
        return standard;
    }
    
    string to_string(){
        stringstream ss;
        ss<<age<<","<<first_name<<","<<last_name<<","<<standard;
        return ss.str();
        // return age ";" first_name ";" last_name ";" standard;
    }
    
    
    
    
    
    
};
/*
Enter code for class Student here.
Read statement for specification.
*/

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}


/*
some important points to be remember

1.  main() function mein jo age hai, woh ek local variable hai — jo user se input lene ke liye use hota hai.
Class ke andar jo age hai (private: int age;), woh Student object ka actual data hai — jo permanently store hota hai object ke andar.


2.
int a ? function ka parameter hai (temporary variable)

age = a; ? yeh kahta hai:
"jo value a mein aayi hai, usko class ke age variable mein store karo"

Important: Dono ka naam same ho sakta hai (e.g. age = age;),
but compiler confuse ho jata hai, isliye  a, b, c use karte hain — ya this->age = age;


3. 
agar kuch nahi return dena hai toh void use karo
otherwise data type use karna hai.

4.
#include <sstream> kya karta hai?

sstream C++ ka ek header file hai jo string streams ke liye use hoti hai.

Ismein stringstream, istringstream, aur ostringstream jaise classes hoti hain, jo strings ke saath stream operations (jaise cin / cout jaise input-output) karne ki suvidha deti hain.

stringstream kya hai?

stringstream ek aisi class hai jo ek string ko input ya output stream ki tarah treat karti hai.

Iska use hum tab karte hain jab:

Humein ek string mein se values nikalni ho (parsing),

Ya ek string ke format mein multiple values ko jodna ho (concatenate karna ho easily).



stringstream ss;
Ek stringstream object banaya gaya hai jiska naam ss hai.

ss << age << "," << first_name << "," << last_name << "," << standard;
<< operator ka use karke multiple cheezein string stream mein daali ja rahi hain

return ss.str();
ss.str() se stringstream ke andar ki complete string milti hai.
 then return  se function return kar deta hai.
 
 */
 
 

        
