#include <iostream>
using namespace std;

int main (){
    string username, password;

    cout << "masukan username : ";
    cin >> username;

    cout << "masukan password : ";
    cin >> password;

    if (username == "akichou" && password == "262626") {
        cout << "username dan password sesuai, log in berhasil!" << endl;
    }

    else if (username == "akichou" && password != "262626" ) {
        cout << "username sesuai, password tidak sesuai!" << endl;
    }

     else if (username != "akichou" && password == "262626") {
         cout << "username tidak sesuai, password sesuai!" << endl;
     }

     else if (username != "akichou" && password != "262626") {
         cout << "username dan password tidak sesuai!" << endl;

     }

     return 0;


}
